#include "volunteershow.h"
#include "ui_volunteershow.h"

VolunteerShow::VolunteerShow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VolunteerShow)
{
    ui->setupUi(this);
}

VolunteerShow::~VolunteerShow()
{
    delete ui;
}

void VolunteerShow::setupModel(const QString &tableName, const QStringList &headers)
{
    SqliteDBManager* db= SqliteDBManager::getInstance();
    model = new QSqlTableModel(this, db->getDB());
    model->setTable(tableName);
    for(int i = 0, j = 0; i < model->columnCount(); i++, j++){
        model->setHeaderData(i, Qt::Horizontal, headers[j]);
    }
    model->setSort(0,Qt::AscendingOrder);
}


void VolunteerShow::createUI()
{

    ui->volunteerTable->setModel(model);
    ui->volunteerTable->setColumnHidden(0, true);
    ui->volunteerTable->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->volunteerTable->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->volunteerTable->resizeColumnsToContents();
    ui->volunteerTable->setEditTriggers(QAbstractItemView::DoubleClicked);
    ui->volunteerTable->horizontalHeader()->setStretchLastSection(true);
    model->select();
}

void VolunteerShow::setList(){
    this->setupModel(TABLE_VOLUNTEER,
                     QStringList() << tr("ID")
                                   << tr("Surname")
                                   << tr("Name")
                                   << tr("Birth Date")
                                   << tr("Phone Number")
                                   << tr("Email")
                                   << tr("Address")
                                   << tr("Activity")
                                   << tr("Status")
                     );

    this->createUI();
}
