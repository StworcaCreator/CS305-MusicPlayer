#include "mainwindow.h"
#include <QApplication>
#include "track.h"
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    //add button to main UI that just plays the music.
    return a.exec();
}
