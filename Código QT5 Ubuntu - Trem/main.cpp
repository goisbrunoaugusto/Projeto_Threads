#include "mainwindow.h"
//#include "mainwindow.cpp"
#include <QApplication>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    w.start();


    return a.exec();
}
