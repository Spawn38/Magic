#ifndef MAGICVALUE_H
#define MAGICVALUE_H

class MagicValue
{
private:
    virtual String code;
    virtual String text;

public:
    MagicValue();
    virtual ~MagicValue()=0;
    virtual String getCode();
    virtual void setCode();
    virtual String getText();
    virtual void setText();
    virtual ostream& operator<<( ostream &flux);
};

#endif // MAGICVALUE_H
