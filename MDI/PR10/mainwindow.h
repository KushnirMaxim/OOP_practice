#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QListWidgetItem>
#include <QListWidget>
#include <QLabel>
#include <QLayout>
#include <QPushButton>
#include <QCheckBox>
#include <QLineEdit>
#include <QWidget>
#include "Human.h"
#include "Employee.h"
#include "Volunteer.h"
#include "employeecreate.h"
#include "volunteercreate.h"
#include "employeeshow.h"
#include "volunteershow.h"
#include "db.h"
#include "sqlite.h"
#include <QtSql/QSqlTableModel>
#include <QDateTime>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class QSqlTableModel;
class DBManager;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(DBManager* dbManager, QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pbCreateEmployee_clicked();

    void on_pbShowEmployee_clicked();

    void on_pbCreateVolunteer_clicked();

    void on_pbShowVolunteer_clicked();

    void on_pbExit_clicked();

private:
    Ui::MainWindow *ui;
    EmployeeShow *showEmployee;
    VolunteerShow *showVolunteer;
    DBManager *db;
    QSqlTableModel  *model;
};
#endif // MAINWINDOW_H
