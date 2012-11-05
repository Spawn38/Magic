#ifndef COLORCARD_H
#define COLORCARD_H

#include <string>
#include <iostream>
#include "magicvalue.h"


class ColorCard : public MagicValue
{
public:
    ColorCard();
    ColorCard(QString& code,QString& text);
    ~ColorCard();
    friend bool operator==(const ColorCard,const ColorCard);
};

#endif // COLORCARD_H
