#include "employeeshow.h"
#include "ui_employeeshow.h"

EmployeeShow::EmployeeShow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EmployeeShow)
{
    ui->setupUi(this);
}

EmployeeShow::~EmployeeShow()
{
    delete ui;
}

void EmployeeShow::setupModel(const QString &tableName, const QStringList &headers)
{
    SqliteDBManager* db= SqliteDBManager::getInstance();
    model = new QSqlTableModel(this, db->getDB());
    model->setTable(tableName);
    for(int i = 0, j = 0; i < model->columnCount(); i++, j++){
        model->setHeaderData(i, Qt::Horizontal, headers[j]);
    }
    model->setSort(0,Qt::AscendingOrder);
}


void EmployeeShow::createUI()
{
    ui->employeeTable->setModel(model);
    ui->employeeTable->setColumnHidden(0, true);
    ui->employeeTable->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->employeeTable->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->employeeTable->resizeColumnsToContents();
    ui->employeeTable->setEditTriggers(QAbstractItemView::DoubleClicked);
    ui->employeeTable->horizontalHeader()->setStretchLastSection(true);

    model->select();
}

void EmployeeShow::setList(){
    this->setupModel(TABLE_EMPLOYEE,
                     QStringList() << tr("ID")
                                   << tr("Surname")
                                   << tr("Name")
                                   << tr("Birth Date")
                                   << tr("Phone Number")
                                   << tr("Email")
                                   << tr("Position")
                                   << tr("Salary")
                                   << tr("Employment Date")
                     );

    this->createUI();
}
