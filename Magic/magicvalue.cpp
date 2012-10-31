#include "magicvalue.h"

MagicValue::MagicValue()
{

}

MagicValue::MagicValue(QString& code,QString& text)
{
    this->code = code;
    this->text = text;
 }

MagicValue::~MagicValue()
{
    this->code = "";
    this->text = "";
}

QString MagicValue::getCode()
{
    return this->text;
}

void MagicValue::setCode(QString& code)
{
    this->code = code;
}

QString MagicValue::getText()
{
    return this->code;
}

void MagicValue::setText(QString& text)
{
    this->text = text;
}

std::ostream& operator<<( std::ostream& flux, MagicValue& m)
{
    flux << QObject::tr("code : ").toStdString() << m.getCode().toStdString() << QObject::tr(" valeur : ").toStdString() << m.getText().toStdString() << endl;
    return flux;
}
