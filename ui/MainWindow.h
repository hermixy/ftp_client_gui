/* 
 * File:   MainWindow.h
 * Author: Aleksey Pyatkin
 *
 * Created on 11.05.2013, 23:22
 */

#ifndef _MAINWINDOW_H
#define	_MAINWINDOW_H

#include <list>
#include "../Options.h"
#include "../FileSystem.h"
#include "ConnectionSettings.h"
#include "ui_MainWindow.h"

class MainWindow : public QMainWindow {
    
    Q_OBJECT
    
    public:
        MainWindow(ConnectionSettings *csw);
        virtual ~MainWindow();
        
    private slots:
        void openPath(QString item);
        void openPath(QListWidgetItem *item);
        
    private:
        Options options;
        FileSystem fs;
        Ui::MainWindow widget;
        ConnectionSettings *csWindow;
        string globalEntity;
        string localPath;
        
};

#endif	/* _MAINWINDOW_H */
