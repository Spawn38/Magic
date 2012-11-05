#ifndef TYPE_H
#define TYPE_H

#include "magicvalue.h"

class Type : public MagicValue
{
public:
    Type();
    bool isCreature();
    bool isLand();
    bool isBasicLand();
};

#endif // TYPE_H
