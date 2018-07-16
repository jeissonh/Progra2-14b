#include "Card.h"
#include <QTextStream>

Card::Card(size_t cardNumber, const QStringList& symbols)
	: cardNumber(cardNumber)
{
	Q_ASSERT(symbols.size() == 75);
	for ( size_t col = 0; col < cardCols; ++col )
		for ( size_t row = 0; row < cardRows; ++row )
			values[row][col] = symbols[col * 15 + qrand() % 15];
}

int Card::fillSvg(QTextStream& source, QTextStream& target) const
{
	for ( size_t col = 0; col < cardCols; ++col )
		for ( size_t row = 0; row < cardRows; ++row )
			target << row+1 << ',' << col+1 << ':' << values[row][col] << endl;
	return 0;
}
