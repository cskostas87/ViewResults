#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include <QStyle>
#include <QDesktopWidget>
#include <iostream>
#include <cstdlib>
#include <QTextEdit>
#include <QLabel>
#include <QtGui>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    w.setGeometry(QStyle::alignedRect(Qt::LeftToRight,Qt::AlignCenter,w.size(),a.desktop()->availableGeometry()));

    return a.exec();
}


