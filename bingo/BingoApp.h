#ifndef BINGOAPP_H
#define BINGOAPP_H

#include <QCoreApplication>
#include <QStringList>

class QTextStream;

class BingoApp : public QCoreApplication
{
	Q_OBJECT
	Q_DISABLE_COPY(BingoApp)

  public:
	enum class Action { unknown, generate, call, help, version };
	static const int symbolCount;

  protected:
	/// Action asked by user when this command was executed
	Action action;
	/// Number of cards to be generated
	size_t numberCardsToGenerate;
	/// Card template: a svg file to be filled out with random number/symbols
	QString cardSvgFilename;
	/// Filename of the symbols.txt: a list of 75 symbols to fill out cells of cards
	QString symbolsFilename;
	/// All the 75 symbols
	QStringList symbols;
	/// Filename of the calling card to be filled out with the 75 symbols
	QString callingCardFilename;

  public:
	/// Constructor
	explicit BingoApp(int& argc, char* argv[]);
	int run();
	/// Prints short usage of this command in the given output
	static int printHelp(QTextStream& out);
	static int printVersion(QTextStream& out);

  protected:
	int analyzeParams();
	int analyzePair(const QString& option, const QString& info);
	int generate();
	int loadSymbols();
	int generateCallingCard();
	int generateCard(QTextStream& sourceSvgCard, size_t cardNumber);
	QString generateTargetCardFilename(size_t cardNumber) const;
	int call();
};

#endif // BINGOAPP_H
