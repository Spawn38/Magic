#include "card.h"

Card::Card()
{

}

int Card::getId()
{
    return this->id;
}

QString Card::getCardName()
{
    return this->card_name;
}

void Card::setCardName(QString& card_name)
{
    this->card_name = card_name;
}

QVector<ColorCard> Card::getColors()
{
    return this->colors;
}

void Card::setColors(QVector<ColorCard>& colors)
{
    this->colors = colors;
}

void Card::addColors(ColorCard& colorCard)
{
    this->colors.push_back(colorCard);
}

int Card::removeColors(ColorCard& colorCard)
{

    int pos = this->colors.indexOf(colorCard);
    if(pos>=0)
    {
        this->colors.remove(pos);
    }
    return (pos >=0);

}

void Card::clearColors()
{
    this->colors.clear();
}

int Card::getBlueManaCost()
{
    return this->blue_mana_cost;
}

int Card::getBlackManaCost()
{
    return this->black_mana_cost;
}

int Card::getWhiteManaCost()
{
    return this->white_mana_cost;
}

int Card::getRedManaCost()
{
    return this->red_mana_cost;
}

int Card::getGreenManaCost()
{
    return this->green_mana_cost;
}

int Card::getUnColorManaCost()
{
    return this->uncolor_mana_cost;
}

int Card::getXManaCost()
{
    return this->nb_x_mana_cost;
}

int Card::getConvertedManaCost()
{
    return this->converted_mana_cost;
}


void Card::setBlueManaCost(int blue_mana_cost)
{
     this->blue_mana_cost = blue_mana_cost;
}

void Card::setBlackManaCost(int black_mana_cost)
{
     this->black_mana_cost =  black_mana_cost;
}

void Card::setWhiteManaCost(int white_mana_cost)
{
    this->white_mana_cost = white_mana_cost;
}

void Card::setRedManaCost(int red_mana_cost)
{
    this->red_mana_cost = red_mana_cost;
}

void Card::setGreenManaCost(int green_mana_cost)
{
    this->green_mana_cost = green_mana_cost;
}

void Card::setUnColorManaCost(int uncolor_mana_cost)
{
    this->uncolor_mana_cost = uncolor_mana_cost;
}

void Card::setXManaCost(int nb_x_mana_cost)
{
    this->nb_x_mana_cost = nb_x_mana_cost;
}

void Card::setConvertedManaCost(int converted_mana_cost)
{
    this->converted_mana_cost = converted_mana_cost;
}

Type Card::getType()
{
    return this->type;
}

void Card::setType(Type& type)
{
    this->type = type;
}

QString Card::getText()
{
    return this->text;
}

void Card::setText(QString& text)
{
    this->text = text;
}

QString Card::getFlavorText()
{
    return this->flavor_text;
}

void Card::setFlavorText(QString& flavor_text)
{
    this->flavor_text = flavor_text;
}

Edition Card::getEdition()
{
    return this->edition;
}

void Card::setEdition(Edition& edition)
{
    this->edition = edition;
}

QString Card::getArtist()
{
    return this->artist;
}

void Card::setArtist(QString& artist)
{
    this->artist = artist;
}

Rarity Card::getRarity()
{
    return this->rarity;
}

void Card::setRarity(Rarity& rarity)
{
    this->rarity = rarity;
}

bool Card::getLegendary()
{
    return this->legendary;
}

void Card::setLegendary(bool legendary)
{
    this->legendary = legendary;
}

bool Card::getWorld()
{
    return this->world;
}

void Card::setWorld(bool world)
{
    this->world = world;
}

bool Card::getTribal()
{
    return this->tribal;
}

void Card::setTribal(bool tribal)
{
    this->tribal = tribal;
}

bool Card::getSnow()
{
    return this->snow;
}

void Card::setSnow(bool snow)
{
    this->snow = snow;
}

QString Card::getImage()
{
    return this->image;
}

void Card::setImage(QString& image)
{
    this->image = image;
}

QString Card::getCodeCard()
{
    return this->codeCard;
}

void Card::setCodeCard(QString& codeCard)
{
    this->codeCard = codeCard;
}

QVector<QString> Card::getSubtype()
{
    return this->subtype;
}

void Card::setSubtype(QVector<QString>& subtype)
{
    this->subtype = subtype;
}

void Card::addSubtype(QString& subtype)
{
    this->subtype.push_back(subtype);
}

int Card::removeSubtype(QString& subtype)
{
    int pos = this->subtype.indexOf(subtype);
    if(pos>=0)
    {
        this->subtype.remove(pos);
    }
    return (pos >=0);
}

void Card::clearSubtype()
{
    this->subtype.clear();
}

std::ostream& operator<<( std::ostream& flux, Card& c)
{
    //flux << QObject::tr("code : ").toStdString() << m.getCode().toStdString() << QObject::tr(" valeur : ").toStdString() << m.getText().toStdString() << endl;
    return flux;
}
