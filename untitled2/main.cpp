#include "mainwindow.h"

#include <QApplication>
#include <QPainter>
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.resize(w.maximumWidth(), w.maximumHeight());
    w.show();
    return a.exec();

    return 0;
}
