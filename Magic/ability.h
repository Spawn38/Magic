#ifndef ABILITY_H
#define ABILITY_H

#include <iostream>
#include "magicvalue.h"

class Ability : public MagicValue
{
public:
    Ability();
    Ability(QString& code,QString& text);
    ~Ability();

};

#endif // ABILITY_H
