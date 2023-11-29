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
    void on_employeeCreated(Employee *);

    void on_volunteerCreated(Volunteer *);

    void on_pbCreateEmployee_clicked();

    void on_pbShowEmployee_clicked();

    void on_pbCreateVolunteer_clicked();

    void on_pbShowVolunteer_clicked();

    void on_pbExit_clicked();

    void on_employeeDoubleClicked(QListWidgetItem* item);

    void on_volunteerDoubleClicked(QListWidgetItem* item);

private:
    Ui::MainWindow *ui;
    EmployeeShow *showEmployee;
    VolunteerShow *showVolunteer;
    QVector<Employee*> employee;
    QVector<Volunteer*> volunteer;
};
#endif // MAINWINDOW_H
