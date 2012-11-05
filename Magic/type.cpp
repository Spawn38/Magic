#include "type.h"

Type::Type() : MagicValue()
{
}

bool Type::isCreature()
{
    return text.contains("creature", Qt::CaseInsensitive);
}

bool Type::isLand()
{
    return text.contains("land", Qt::CaseInsensitive);
}

bool Type::isBasicLand()
{
    return text.contains("basic", Qt::CaseInsensitive) &&
            text.contains("land", Qt::CaseInsensitive);
}
