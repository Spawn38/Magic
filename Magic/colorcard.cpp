#include "colorcard.h"

ColorCard::ColorCard():MagicValue()
{

}

ColorCard::ColorCard(QString& code,QString& text):MagicValue(code,text)
{

}

ColorCard::~ColorCard()
{

}

bool operator==( ColorCard m1, ColorCard m2)
{
    return (m1.getText().compare(m2.getText())==0);
}

