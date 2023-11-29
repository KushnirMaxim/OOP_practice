#ifndef EMPLOYEESHOW_H
#define EMPLOYEESHOW_H

#include <QDialog>
#include <QListWidget>
#include "employeecreate.h"
#include "sqlite.h"

namespace Ui {
class EmployeeShow;
}

class EmployeeShow : public QDialog
{
    Q_OBJECT

public:
    explicit EmployeeShow(QWidget *parent = nullptr);
    void setList();
    ~EmployeeShow();

private:
    Ui::EmployeeShow *ui;
    void setupModel(const QString &tableName, const QStringList &headers);
    void createUI();
    DBManager *db;
    QSqlTableModel  *model;
};

#endif // EMPLOYEESHOW_H
