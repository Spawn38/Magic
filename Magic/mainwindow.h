#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void openFile();
    void openNewFile();
    void closeFile();
    void saveFile();
    void saveAsFile();

private:
    void MainWindow::updateMenu();
    Ui::MainWindow *ui;
    QString fileName;
    bool change;
};

#endif // MAINWINDOW_H
