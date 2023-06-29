#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qDebug"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    map = new TilleMap(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    //вычисляем размеры каждого "квадратика"
    double h_step = (double)height()/V_SIZE;
    double w_step = (double)width()/H_SIZE;
    qDebug()<<h_step<<' '<<w_step;
    double x = 0;
    double y = 0;
    for(int i = 0;i<V_SIZE;i++)
    {
        for(int j = 0; j<H_SIZE;j++)
        {
            painter.setBrush((QBrush(map->get_texture(i,j))));
            painter.setPen(QPen(QColor(Qt::transparent)));
            painter.drawRect(x,y,w_step,h_step);
            x+=w_step-1;
        }
        x=0;
        y+=h_step-1;
    }
}


