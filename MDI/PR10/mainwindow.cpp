#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogemployee.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_addEmployeeButton_clicked()
{
    DialogEmployee dialog;
    if (dialog.exec() == QDialog::Accepted) {
        // Отримуємо об'єкт типу Employee і обробляємо його
        Employee employee = dialog.getEmployee();
        // TODO: Додати логіку для додавання об'єкта в таблицю або модель
    }
}
