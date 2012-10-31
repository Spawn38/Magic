#ifndef MAGICVALUE_H
#define MAGICVALUE_H

#include <string>
#include <iostream>
#include <QObject>

using namespace std;

class MagicValue
{
private:
    QString code;
    QString text;

public:
    MagicValue();
    MagicValue(QString& code,QString& text);
    ~MagicValue();
    QString getCode();
    void setCode(QString& code);
    QString getText();
    void setText(QString& text);
    friend std::ostream& operator<<( std::ostream&,const MagicValue&);
};

#endif // MAGICVALUE_H
