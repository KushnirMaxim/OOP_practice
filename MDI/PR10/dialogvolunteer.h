#ifndef DIALOGVOLUNTEER_H
#define DIALOGVOLUNTEER_H

#include <QDialog>
#include "volunteer.h"  // Включено для доступу до класу Volunteer

namespace Ui {
class DialogVolunteer;
}

class DialogVolunteer : public QDialog
{
    Q_OBJECT

public:
    explicit DialogVolunteer(QWidget *parent = nullptr);
    ~DialogVolunteer();

    Volunteer getVolunteer() const;
    void setVolunteer(const Volunteer &volunteer);

private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();

private:
    Ui::DialogVolunteer *ui;  // Додано включення для класу Ui::DialogVolunteer
};

#endif // DIALOGVOLUNTEER_H
