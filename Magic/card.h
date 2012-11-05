#ifndef CARD_H
#define CARD_H


#include <QString>
#include <iostream>
#include <QObject>
#include <QVector>

#include "colorcard.h"
#include "type.h"
#include "edition.h"
#include "rarity.h"

class Card
{
public:
    Card();
    friend std::ostream& operator<<( std::ostream&,const Card&);
protected:
    int id;
    QString card_name;
    QVector<ColorCard> colors;
    int blue_mana_cost;
    int black_mana_cost;
    int white_mana_cost;
    int red_mana_cost;
    int green_mana_cost;
    int uncolor_mana_cost;
    int nb_x_mana_cost;
    int converted_mana_cost;
    Type type;
    QString text;
    QString flavor_text;
    Edition edition;
    QString artist;
    Rarity rarity;
    bool Legendary;
    bool World;
    bool Tribal;
    bool Snow;
    QString Image;
    QVector<QString> subtype;
    QString codeCard;
};

#endif // CARD_H
