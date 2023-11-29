#ifndef VOLUNTEERSHOW_H
#define VOLUNTEERSHOW_H

#include <QDialog>
#include <QListWidget>
#include "volunteercreate.h"

namespace Ui {
class VolunteerShow;
}

class VolunteerShow : public QDialog
{
    Q_OBJECT

public:
    explicit VolunteerShow(QWidget *parent = nullptr);
    void setList(const QVector<Volunteer *> &volunteer);
    QListWidget* getListWidget();
    ~VolunteerShow();

private:
    Ui::VolunteerShow *ui;
    QVector<Volunteer *> volunteer;
};

#endif // VOLUNTEERSHOW_H
