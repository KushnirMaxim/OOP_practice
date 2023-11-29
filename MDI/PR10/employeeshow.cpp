#include "employeeshow.h"
#include "ui_employeeshow.h"

EmployeeShow::EmployeeShow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EmployeeShow)
{
    ui->setupUi(this);
}

QListWidget* EmployeeShow::getListWidget() {
    return (ui->employeeList);
}

EmployeeShow::~EmployeeShow()
{
    delete ui;
}

void EmployeeShow::setList(const QVector<Employee *> &employee){
    for (Employee* emp : employee) {
        QListWidgetItem* item = new QListWidgetItem(ui->employeeList);
        item->setText(QString::fromStdString(emp->getSurname()));
        item->setData(Qt::UserRole, QVariant::fromValue(emp));
    }
}
