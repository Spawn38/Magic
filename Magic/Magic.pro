#-------------------------------------------------
#
# Project created by QtCreator 2012-10-31T11:39:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Magic
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    magicvalue.cpp \
    ability.cpp \
    colorcard.cpp \
    card.cpp \
    edition.cpp \
    type.cpp \
    rarity.cpp

HEADERS  += mainwindow.h \
    magicvalue.h \
    ability.h \
    colorcard.h \
    card.h \
    edition.h \
    type.h \
    rarity.h

FORMS    += mainwindow.ui
