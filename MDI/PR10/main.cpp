#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DBManager* dbManager = SqliteDBManager::getInstance();
    MainWindow window(dbManager);
    window.show();
    return a.exec();
}
