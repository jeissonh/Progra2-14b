#ifndef CARD_H
#define CARD_H

#include <QStringList>

class QTextStream;

const size_t cardCols = 5;
const size_t cardRows = 5;

class Card
{
  protected:
	size_t cardNumber;
	QString values[cardRows][cardCols];

  public:
	explicit Card(size_t cardNumber, const QStringList& symbols);
	int fillSvg(QTextStream& source, QTextStream& target) const;
};

#endif // CARD_H
