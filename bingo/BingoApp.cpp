#include "BingoApp.h"
#include <QFile>
#include <QFileInfo>
#include <QRegExp>
#include <QTextStream>
#include <Card.h>

QTextStream cin(stdin);
QTextStream cout(stdout);
QTextStream cerr(stderr);

const int BingoApp::symbolCount = symbolCount;

BingoApp::BingoApp(int& argc, char* argv[])
	: QCoreApplication(argc, argv)
	, action(Action::unknown)
	, numberCardsToGenerate(0)
{
}

int BingoApp::run()
{
	if (int result = analyzeParams())
		return result;

	qsrand(time(nullptr));
	switch ( action )
	{
		case Action::call: return call();
		case Action::generate: return generate();
		case Action::help: return printHelp(cout);
		case Action::version: return printVersion(cout);
		case Action::unknown: return 1;
	}
}

int BingoApp::analyzeParams()
{
	const QStringList& args { arguments() };
	foreach ( const QString& arg, args )
	{
		if ( arg == "--help" ) { action = Action::help; return 0; }
		if ( arg == "--version" ) { action = Action::version; return 0; }
	}

	if ( args.size() <= 1 )
	{
		cerr << "bingo: no action specified\n";
		return 2;
	}

	if ( args[1] == "generate" )
	{
		action = Action::generate;
		if ( args.size() < 4 ) { cerr << "bingo: generate requires NUMBER and card.svg\n"; return 5; }
		bool ok = false;
		numberCardsToGenerate = args[2].toULongLong(&ok);
		if ( ! ok ) { cerr << "bingo: invaid number of cards to generate: " << args[2] << endl; return 6; }
		cardSvgFilename = args[3];
		if ( args.size() == 4 ) return 0;
		if ( args.size() == 6 )
			return analyzePair(args[4], args[5]);
		if ( args.size() == 8 )
			return analyzePair(args[4], args[5]) == 0 ? analyzePair(args[6], args[7]) : 8;

		cerr << "bingo: invalid parameters provided to generate action\n";
		return 7;
	}

	if ( args[1] == "call" )
	{
		action = Action::call;
		return 0;
	}

	cerr << "bingo: unknown action: " << args[1] << endl;
	return 3;
}

int BingoApp::analyzePair(const QString& option, const QString& info)
{
	if ( option == "-s" ) symbolsFilename = info;
	else if ( option == "-c" ) callingCardFilename = info;
	else { cerr << "bingo: unknown option " << option << endl; return 8; }
	return 0;
}

int BingoApp::generate()
{
	// Card svg file
	QFile cardSvgFile(cardSvgFilename);
	if ( ! cardSvgFile.open(QIODevice::Text | QIODevice::ReadOnly) )
		{ cerr << "bingo: could not open " << cardSvgFilename << endl; return 20; }

	// Load symbols file and generate calling card if asked
	if (int result = loadSymbols() ) return result;
	if (int result = generateCallingCard() ) return result;

	// Actual processing
	cout << "Generating " << numberCardsToGenerate << " bingo cards...\n";
	QTextStream cardSvg(&cardSvgFile);
	for ( size_t i = 1; i <= numberCardsToGenerate; ++i )
	{
		if (int result = generateCard(cardSvg, i)) return result;
		cardSvg.seek(0);
	}

	cout << "Done\n";
	return 0;
}

int BingoApp::loadSymbols()
{
	cerr << symbols.size() << " symbols before\n";
	if ( symbolsFilename.length() > 0 )
	{
		QFile symbolsFile(symbolsFilename);
		if ( ! symbolsFile.open(QIODevice::Text | QIODevice::ReadOnly) )
			{ cerr << "bingo: could not open " << symbolsFilename << endl; return 21; }

		symbols.reserve(symbolCount);
		for ( QTextStream symbolsStream(&symbolsFile); ! symbolsStream.atEnd() && symbols.size() <= symbolCount; )
			symbols.push_back( symbolsStream.readLine() );

		if ( symbols.size() == symbolCount ) return 0;
		cerr << "bingo: file must have 75 symbols: " << symbolsFilename << endl;
		return 23;
	}
	else
	{
		symbols.reserve(symbolCount);
		for ( int i = 1; i <= symbolCount; ++i )
			symbols.push_back(QString::number(i));

		cerr << symbols.size() << " numbers generated\n";
	}
	return 0;
}

int BingoApp::generateCallingCard()
{
	return 0;
}

int BingoApp::generateCard(QTextStream& sourceSvgCard, size_t cardNumber)
{
	const QString& targetFilename = generateTargetCardFilename(cardNumber);
	QFile targetFile(targetFilename);
	if ( ! targetFile.open(QIODevice::Text | QIODevice::WriteOnly) )
		{ cerr << "bingo: could not create " << targetFilename << endl; return 22; }

	QTextStream targetStream(&targetFile);
	Card card(cardNumber, symbols);
	return card.fillSvg(sourceSvgCard, targetStream);
}

int digitsRequiredBy(size_t number)
{
	int digits = 1;
	for( number /= 10; number; number /= 10 )
		++digits;
	return digits;
}


QString BingoApp::generateTargetCardFilename(size_t cardNumber) const
{
	const QString& zeroFilledNumber = QString("%1").arg(cardNumber, digitsRequiredBy(numberCardsToGenerate), 10, QLatin1Char('0'));
	QString result{cardSvgFilename};
	return result.replace(QRegExp("^(.+)\\.([^\\.]+)$"), "\\1-" + zeroFilledNumber + ".\\2");
}

int BingoApp::call()
{
	cout << "Calling bingo sessions...\n";
	return 0;
}

int BingoApp::printHelp(QTextStream& out)
{
	out <<
		"Create Bingo cards and simulate game sessions. Usage:\n"\
		"bingo generate NUMBER card.svg [-s symbols.txt] [-c callingcard.svg]\n"\
		"bingo call [card.idx] [-t type] [-s symbols.txt] [-w winners]\n"\
		"\n"\
		"Actions:\n"\
		"  generate               Generate random cards in current directory\n"\
		"  call                   Simulate a bingo game session\n"\
		"\n"\
		"Options:\n"\
		"  NUMBER                 Number of cards to be generated\n"\
		"  card.svg               Graphic design of the card with ${field} placeholders\n"\
		"  card.idx               Contains all the generated cards and their 24 or 25 symbols\n"\
		"  -c callingcard.svg     Fill out the given calling card with all symbolCount symbols\n"\
		"  -s symbols.txt         Use the given symbolCount symbols instead of numbers\n"\
		"  -t type                Pattern to be matched in order to win. Valid types:\n"\
		"                         four-corners, straight-line, diagonal, any-line, roving-L, blackout\n"\
		"  -w winners             Number of winners until finish the session\n";

	return 0;
}

int BingoApp::printVersion(QTextStream& out)
{
	out << "Bingo v1.0 [2014-12-14] Jeisson Hidalgo-Cespedes <jeissonh@gmail.com>\n"\
		"This is free software licensed as Creative Commons Attribution-ShareAlike 4.0 International\n";

	return 0;
}

