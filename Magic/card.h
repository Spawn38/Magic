#ifndef CARD_H
#define CARD_H


#include <QString>
#include <iostream>
#include <QObject>
#include <QVector>

#include "magicvalue.h"
#include "colorcard.h"
#include "type.h"
#include "edition.h"
#include "rarity.h"

class Card
{
public:
    Card();
    friend std::ostream& operator<<( std::ostream&,const Card&);
    int getId();
    QString getCardName();
    void setCardName(QString& card_name);
    QVector<ColorCard> getColors();
    void setColors(QVector<ColorCard>& colors);
    void addColors(ColorCard& colorCard);
    int removeColors(ColorCard& colorCard);
    void clearColors();
    int getBlueManaCost();
    int getBlackManaCost();
    int getWhiteManaCost();
    int getRedManaCost();
    int getGreenManaCost();
    int getUnColorManaCost();
    int getXManaCost();
    int getConvertedManaCost();
    void setBlueManaCost(int blue_mana_cost);
    void setBlackManaCost(int black_mana_cost);
    void setWhiteManaCost(int white_mana_cost);
    void setRedManaCost(int red_mana_cost);
    void setGreenManaCost(int green_mana_cost);
    void setUnColorManaCost(int uncolor_mana_cost);
    void setXManaCost(int nb_x_mana_cost);
    void setConvertedManaCost(int converted_mana_cost);
    Type getType();
    void setType(Type& type);
    QString getText();
    void setText(QString& text);
    QString getFlavorText();
    void setFlavorText(QString& flavor_text);
    Edition getEdition();
    void setEdition(Edition& edition);
    QString getArtist();
    void setArtist(QString& artist);
    Rarity getRarity();
    void setRarity(Rarity& rarity);
    bool getLegendary();
    void setLegendary(bool legendary);
    bool getWorld();
    void setWorld(bool world);
    bool getTribal();
    void setTribal(bool tribal);
    bool getSnow();
    void setSnow(bool snow);
    QString getImage();
    void setImage(QString& image);
    QString getCodeCard();
    void setCodeCard(QString& codeCard);
    QVector<QString> getSubtype();
    void setSubtype(QVector<QString>& vector);
    void addSubtype(QString& subtype);
    int removeSubtype(QString& subtype);
    void clearSubtype();

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
    bool legendary;
    bool world;
    bool tribal;
    bool snow;
    QString image;
    QVector<QString> subtype;
    QString codeCard;
};

#endif // CARD_H
