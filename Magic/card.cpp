#include "card.h"

Card::Card()
{

}

std::ostream& operator<<( std::ostream& flux, Card& c)
{
    //flux << QObject::tr("code : ").toStdString() << m.getCode().toStdString() << QObject::tr(" valeur : ").toStdString() << m.getText().toStdString() << endl;
    return flux;
}
