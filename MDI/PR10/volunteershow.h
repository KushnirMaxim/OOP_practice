#ifndef VOLUNTEERSHOW_H
#define VOLUNTEERSHOW_H

#include <QDialog>
#include <QListWidget>
#include "volunteercreate.h"
#include "sqlite.h"

namespace Ui {
class VolunteerShow;
}

class VolunteerShow : public QDialog
{
    Q_OBJECT

public:
    explicit VolunteerShow(QWidget *parent = nullptr);
    void setList();
    ~VolunteerShow();

private:
    Ui::VolunteerShow *ui;
    void setupModel(const QString &tableName, const QStringList &headers);
    void createUI();
    DBManager *db;
    QSqlTableModel  *model;
};

#endif // VOLUNTEERSHOW_H
