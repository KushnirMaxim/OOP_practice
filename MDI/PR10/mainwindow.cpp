#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pbCreateEmployee_clicked()
{
    EmployeeCreate createEmployee;
    createEmployee.setModal(true);
    QObject::connect(&createEmployee, &EmployeeCreate::employeeCreated, this, &MainWindow::on_employeeCreated);
    createEmployee.exec();
}


void MainWindow::on_pbShowEmployee_clicked()
{
    showEmployee = new EmployeeShow(this);
    showEmployee->show();
    showEmployee->setList(employee);
    connect(showEmployee->getListWidget(), &QListWidget::itemDoubleClicked, this, &MainWindow::on_employeeDoubleClicked);
}


void MainWindow::on_pbCreateVolunteer_clicked()
{
    VolunteerCreate createVolunteer;
    createVolunteer.setModal(true);
    QObject::connect(&createVolunteer, &VolunteerCreate::volunteerCreated, this, &MainWindow::on_volunteerCreated);
    createVolunteer.exec();
}


void MainWindow::on_pbShowVolunteer_clicked()
{
    showVolunteer = new VolunteerShow(this);
    showVolunteer->show();
    showVolunteer->setList(volunteer);
    connect(showVolunteer->getListWidget(), &QListWidget::itemDoubleClicked, this, &MainWindow::on_volunteerDoubleClicked);
}

void MainWindow::on_employeeDoubleClicked(QListWidgetItem* item)
{
    QFont newFont;
    newFont.setFamily("Segue UI");
    newFont.setPointSize(14);
    if (item) {
        Employee *emp= item->data(Qt::UserRole).value<Employee *>();
        if (emp) {
            QString itemText = "ID: " + QString::number(emp->getId()) +
                               ", Surname: " + QString::fromStdString(emp->getSurname()) +
                               ", Name: " + QString::fromStdString(emp->getName()) +
                               ", Date of birth: " + QString::fromStdString(emp->getDataOfBirth()) +
                               ", Phone number: " + QString::number(emp->getNumberOfPhone()) +
                               ", Email: " + QString::fromStdString(emp->getEmail()) +
                               ", Position: " + QString::fromStdString(emp->getPosition()) +
                               ", Current salary: " + QString::number(emp->getCurrentSalary()) +
                               ", Data of employment: " + QString::fromStdString(emp->getDataOfEmployment());
            item->setFont(newFont);
            QMessageBox::information(this, "Employee", itemText, QMessageBox::Ok);
        }
    }
}

void MainWindow::on_volunteerDoubleClicked(QListWidgetItem* item)
{
    QFont newFont;
    newFont.setFamily("Segue UI");
    newFont.setPointSize(14);
    if (item) {
        Volunteer *vol= item->data(Qt::UserRole).value<Volunteer *>();
        if (vol) {
            QString itemText = "ID: " + QString::number(vol->getId()) +
                               ", Surname: " + QString::fromStdString(vol->getSurname()) +
                               ", Name: " + QString::fromStdString(vol->getName()) +
                               ", Date of birth: " + QString::fromStdString(vol->getDataOfBirth()) +
                               ", Phone number: " + QString::number(vol->getNumberOfPhone()) +
                               ", Email: " + QString::fromStdString(vol->getEmail()) +
                               ", Address: " + QString::fromStdString(vol->getAddress()) +
                               ", Type of activity: " + QString::fromStdString(vol->getActivity()) +
                               ", Status: " + QString::fromStdString(vol->getStatus());
            item->setFont(newFont);
            QMessageBox::information(this, "Employee", itemText, QMessageBox::Ok);
        }
    }
}

void MainWindow::on_pbExit_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Exit", "Exiting programme", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        QCoreApplication::exit(0);
    }
}

void MainWindow::on_employeeCreated(Employee* emp)
{
    employee.push_back(emp);
}

void MainWindow::on_volunteerCreated(Volunteer* vol)
{
    volunteer.push_back(vol);
}

