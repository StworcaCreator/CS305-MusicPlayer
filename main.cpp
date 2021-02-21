#include "mainwindow.h"
#include <Windows.h>
#include <QApplication>
#include "track.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
