/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed 31. Oct 17:23:13 2012
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionClose;
    QAction *actionQuit;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuView;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->resize(737, 573);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 737, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addAction(actionClose);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);

        retranslateUi(MainWindow);
        QObject::connect(actionQuit, SIGNAL(activated()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Magc retreiver", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("MainWindow", "New", 0, QApplication::UnicodeUTF8));
        actionNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("MainWindow", "Open ...", 0, QApplication::UnicodeUTF8));
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0, QApplication::UnicodeUTF8));
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As ...", 0, QApplication::UnicodeUTF8));
        actionClose->setText(QApplication::translate("MainWindow", "Close", 0, QApplication::UnicodeUTF8));
        actionClose->setShortcut(QApplication::translate("MainWindow", "Ctrl+W", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("MainWindow", "View", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
