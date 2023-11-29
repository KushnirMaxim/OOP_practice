#include "sqlite.h"

#include <QObject>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QFile>
#include <QDate>
#include <QDebug>

SqliteDBManager* SqliteDBManager::instance = nullptr;

SqliteDBManager::SqliteDBManager(){

}

SqliteDBManager* SqliteDBManager::getInstance()
{
    if(instance == nullptr){
        instance = new SqliteDBManager();
    }
    return instance;
}

void SqliteDBManager::connectToDataBase()
{
        if (QFile(DATABASE_NAME).exists()) {
            if (!this->openDataBase()) {
            }
        } else {
            if (!this->restoreDataBase()) {
            }
        }
}

QSqlDatabase SqliteDBManager::getDB()
{
    return db;
}

bool SqliteDBManager::restoreDataBase()
{
        if (this->openDataBase()) {
            if (!this->createTableEmployee()) {
                if(!this->createTableVolunteer()) {return false;}
            } else {
                return true;
            }
        }
}

bool SqliteDBManager::openDataBase()
{
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setHostName(DATABASE_HOSTNAME);
        db.setDatabaseName(DATABASE_NAME);

        if (db.open()) {
            return true;
        }
}

void SqliteDBManager::closeDataBase()
{
    db.close();
}

bool SqliteDBManager::createTableEmployee()
{
    QSqlQuery query;
    bool b = true;
    if(!query.exec( "CREATE TABLE " TABLE_EMPLOYEE"("
                    TABLE_ID " INT NOT NULL, "
                    TABLE_SURNAME " TEXT NOT NULL,"
                    TABLE_NAME " TEXT NOT NULL,"
                    TABLE_BIRTHDATE " TEXT NOT NULL,"
                    TABLE_PHONENUM" INT NOT NULL,"
                    TABLE_EMAIL" TEXT NOT NULL,"
                    TABLE_POSITION " TEXT NOT NULL,"
                    TABLE_SALARY " DOUBLE NOT NULL,"
                    TABLE_EMPLOYMENT " TEXT NOT NULL"
                    " )"
                    )){
        b = false;
    }

        return b;
}

bool SqliteDBManager::createTableVolunteer(){
        QSqlQuery query;
        bool b = true;
        if(!query.exec( "CREATE TABLE " TABLE_VOLUNTEER"("
                        TABLE_ID " INT NOT NULL, "
                        TABLE_SURNAME " TEXT NOT NULL,"
                        TABLE_NAME " TEXT NOT NULL,"
                        TABLE_BIRTHDATE " TEXT NOT NULL,"
                        TABLE_PHONENUM" INT NOT NULL,"
                        TABLE_EMAIL" TEXT NOT NULL,"
                        TABLE_ADDRESS " TEXT NOT NULL,"
                        TABLE_ACTIVITY " TEXT NOT NULL,"
                        TABLE_STATUS " TEXT NOT NULL"
                        " )"
                        )){
        b = false;
        }
        return b;
}
bool SqliteDBManager::insertIntoTable(Employee& emp)
{
        QSqlQuery query;
        query.prepare("INSERT INTO " TABLE_EMPLOYEE " ("
                      TABLE_ID ", "
                      TABLE_SURNAME ", "
                      TABLE_NAME ", "
                      TABLE_BIRTHDATE ", "
                      TABLE_PHONENUM ", "
                      TABLE_EMAIL ", "
                      TABLE_POSITION ", "
                      TABLE_SALARY ", "
                      TABLE_EMPLOYMENT ") "
                      "VALUES(:ID, :surname, :name, :dataOfBirth, :numberOfPhone, :email, :position, :currentSalary, :dataOfEmployment)");
        query.bindValue(":ID", emp.getId());
        query.bindValue(":surname",  QString::fromStdString(emp.getSurname()));
        query.bindValue(":name",  QString::fromStdString(emp.getName()));
        query.bindValue(":dataOfBirth",  QString::fromStdString(emp.getDataOfBirth()));
        query.bindValue(":numberOfPhone", emp.getNumberOfPhone());
        query.bindValue(":email", QString::fromStdString(emp.getEmail()));
        query.bindValue(":position",  QString::fromStdString(emp.getPosition()));
        query.bindValue(":currentSalary", emp.getCurrentSalary());
        query.bindValue(":dataOfEmployment",  QString::fromStdString(emp.getDataOfEmployment()));

        if (!query.exec()) {
        qDebug() << "Error insert to Employee`s table: ";
        return false;
        } else return true;

}

bool SqliteDBManager::insertIntoTable(Volunteer& vol)
{
    QSqlQuery query;
                query.prepare("INSERT INTO " TABLE_VOLUNTEER" ("
                              TABLE_ID ", "
                              TABLE_SURNAME ", "
                              TABLE_NAME ", "
                              TABLE_BIRTHDATE ", "
                              TABLE_PHONENUM ", "
                              TABLE_EMAIL ", "
                              TABLE_ADDRESS ", "
                              TABLE_ACTIVITY ", "
                              TABLE_STATUS") "
                              "VALUES(:ID, :surname, :name, :dataOfBirth, :numberOfPhone, :email, :address, :activity, :status)");
            query.bindValue(":ID", vol.getId());
            query.bindValue(":surname",  QString::fromStdString(vol.getSurname()));
            query.bindValue(":name",  QString::fromStdString(vol.getName()));
            query.bindValue(":dataOfBirth",  QString::fromStdString(vol.getDataOfBirth()));
            query.bindValue(":numberOfPhone", vol.getNumberOfPhone());
            query.bindValue(":email", QString::fromStdString(vol.getEmail()));
            query.bindValue(":address",  QString::fromStdString(vol.getAddress()));
            query.bindValue(":activity",  QString::fromStdString(vol.getActivity()));
            query.bindValue(":status",  QString::fromStdString(vol.getStatus()));

                if (!query.exec()) {
        qDebug() << "Error insert to HotelRooms table: ";
        return false;
                } else return true;
}

