#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "fraktale.h"
#include <QRect>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
void MainWindow::paintEvent(QPaintEvent*)
{
    QPainter painter(this);
    //QRect kwadrat(10, 10, 400, 700);
    //painter.setWindow(kwadrat);

    rysujFraktal(&painter);
}
MainWindow::~MainWindow()
{
    delete ui;
}

