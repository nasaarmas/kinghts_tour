#include "mainwindow.h"

#include <QApplication>
#include <QScreen>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;
    auto qscr = QGuiApplication::primaryScreen();
    auto geo = qscr->size();
    w.setMaximumSize(geo);
    w.resize(w.maximumWidth(), w.maximumHeight());
    w.show();
    return a.exec();
}
