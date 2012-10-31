#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    this->fileName = "";
    change = false;
    ui->setupUi(this);
    updateMenu();
    connect (ui->actionNew, SIGNAL(activated()),this,SLOT(openNewFile())) ;
    connect (ui->actionOpen, SIGNAL(activated()),this,SLOT(openFile())) ;
    connect (ui->actionClose, SIGNAL(activated()),this,SLOT(closeFile())) ;
    connect (ui->actionSave, SIGNAL(activated()),this,SLOT(saveFile())) ;
    connect (ui->actionSave_As, SIGNAL(activated()),this,SLOT(saveAsFile())) ;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openNewFile()
{
    QMessageBox msgBox;
    QString fileTempName;
    fileTempName = QFileDialog::getSaveFileName(this, tr("Enter a XML file"),
                                                  QDir::currentPath(),
                                                  tr("XML Files (*.xml)"));

    QFile file(fileTempName);

    if(file.exists())
    {
        msgBox.setText(QObject::tr("Question"));
                msgBox.setInformativeText("The file already exists. Do you want to erase the existing file ?");
        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel);
        msgBox.setDefaultButton(QMessageBox::Yes);
        int ret = msgBox.exec();
        switch(ret)
        {
        case QMessageBox::Yes :
            file.write("test");
            file.close();
            this->fileName = fileTempName;
            change = false;
        }
    }
    else
    {
        this->fileName = fileTempName;
        change = false;
    }
    updateMenu();
}

void MainWindow::closeFile()
{
    if(change)
    {


    }
    change=false;
    fileName = "";
    updateMenu();
}

void MainWindow::saveFile()
{
    change=false;
    updateMenu();
}

void MainWindow::saveAsFile()
{
    QMessageBox msgBox;
    QString fileTempName;
    fileTempName = QFileDialog::getSaveFileName(this, tr("Enter a XML file"),
                                                  QDir::currentPath(),
                                                  tr("XML Files (*.xml)"));

    QFile file(fileTempName);

    if(file.exists())
    {
        msgBox.setText(QObject::tr("Question"));
                msgBox.setInformativeText("The file already exists. Do you want to replace the existing file ?");
        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel);
        msgBox.setDefaultButton(QMessageBox::Yes);
        int ret = msgBox.exec();
        switch(ret)
        {
        case QMessageBox::Yes :
            file.write("test");
            file.close();
            this->fileName = fileTempName;
            change = false;
        }
    }
    else
    {
        this->fileName = fileTempName;
        change = false;
    }
    updateMenu();
}

void MainWindow::openFile()
{
    this->fileName = QFileDialog::getOpenFileName(this, tr("Open a XML file"),
                                                  QDir::currentPath(),
                                                  tr("XML Files (*.xml)"));
    updateMenu();
}

void MainWindow::updateMenu()
{
    if(this->fileName=="")
    {
        ui->actionNew->setEnabled(true);
        ui->actionOpen->setEnabled(true);
        ui->actionSave->setEnabled(false);
        ui->actionSave_As->setEnabled(false);
        ui->actionClose->setEnabled(false);
    }
    else
    {
        ui->actionNew->setEnabled(false);
        ui->actionOpen->setEnabled(false);

        if(change)
        {
            ui->actionSave->setEnabled(true);
        }
        ui->actionSave_As->setEnabled(true);
        ui->actionClose->setEnabled(true);
    }
}
