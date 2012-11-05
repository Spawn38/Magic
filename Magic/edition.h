#ifndef EDITION_H
#define EDITION_H

#include "magicvalue.h"

class Edition : public MagicValue
{
public:
    Edition();
    Edition(QString& abbreviation);
    QString getAbbreviation();
    void setAbbreviation(QString& abbreviation);
 //   friend std::ostream& operator<<( std::ostream&,const Edition&);
private:
    QString abbreviation;

};

#endif // EDITION_H
