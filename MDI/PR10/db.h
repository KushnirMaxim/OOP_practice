#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QtSql/QSqlTableModel>
#include "Employee.h"
#include "Volunteer.h"

class DBManager
{
public:
    virtual void connectToDataBase() = 0;
    virtual QSqlDatabase getDB() = 0;
    virtual bool insertIntoTable(Employee& emp) = 0;
    virtual bool insertIntoTable(Volunteer& vol) = 0;
};

#endif // DBMANAGER_H
