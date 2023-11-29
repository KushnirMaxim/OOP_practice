#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql/QSqlTableModel>
#include <QVariantList>

#include <db.h>

#define DATABASE_HOSTNAME "example"
#define DATABASE_NAME "mynewdb.sqlite"

#define TABLE_EMPLOYEE "Apartments"
#define TABLE_VOLUNTEER "HotelRooms"
#define TABLE_ID "ID"
#define TABLE_SURNAME "surname"
#define TABLE_NAME "name"
#define TABLE_BIRTHDATE "dataOfBirth"
#define TABLE_PHONENUM "numberOfPhone"
#define TABLE_EMAIL "email"
#define TABLE_ADDRESS "address"
#define TABLE_ACTIVITY "activity"
#define TABLE_STATUS "status"
#define TABLE_POSITION "position"
#define TABLE_SALARY "currentSalary"
#define TABLE_EMPLOYMENT "dataOfEmployment"

class SqliteDBManager : public DBManager {

public:
    static SqliteDBManager* getInstance();

    void connectToDataBase();
    QSqlDatabase getDB();
    bool insertIntoTable(Employee& emp);
    bool insertIntoTable(Volunteer& vol);

private:
    QSqlDatabase db;
    static SqliteDBManager* instance;
    SqliteDBManager();
    bool openDataBase();
    bool restoreDataBase();
    void closeDataBase();
    bool createTableEmployee();
    bool createTableVolunteer();
};



#endif // DATABASE_H
