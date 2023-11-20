#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Employee.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_actCreate_triggered();

    void on_actDisplay_triggered();

    void on_actClose_triggered();

private:
    Ui::MainWindow *ui;
    Employee *employee;
};
#endif // MAINWINDOW_H
