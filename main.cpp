/*
 * File:   main.cpp
 * Author: Aleksey Pyatkin
 *
 * Created on 11.05.2013, 20:03
 */

#include <QtGui/QApplication>

#include "ui/MainWindow.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    MainWindow mainWindow;
    
    mainWindow.show();

    return app.exec();
}
