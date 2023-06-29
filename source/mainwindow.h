#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//размеры  поля


#include <QMainWindow>
#include "tillemap.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    TilleMap* map;
public:
    void load_lvl(int);    //заглушка под загрузку файла уровня
    void paintEvent(QPaintEvent* );     //отрисовка кадра уровня
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
