#include "edition.h"

Edition::Edition() : MagicValue()
{

}

Edition::Edition(QString& abbreviation) : MagicValue()
{
    this->abbreviation = abbreviation;
}


QString Edition::getAbbreviation()
{
    return abbreviation;
}

void Edition::setAbbreviation(QString& abbreviation)
{
     this->abbreviation = abbreviation;
}
/*
std::ostream& operator<<( std::ostream& flux, MagicValue& m)
{
    flux << QObject::tr("code : ").toStdString() << m.getCode().toStdString() << QObject::tr(" valeur : ").toStdString() << m.getText().toStdString() << endl;
    return flux;
}
*/
