QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Employee.cpp \
    Human.cpp \
    Volunteer.cpp \
    employeecreate.cpp \
    employeeshow.cpp \
    logfile.cpp \
    main.cpp \
    mainwindow.cpp \
    sqlite.cpp \
    volunteercreate.cpp \
    volunteershow.cpp

HEADERS += \
    Employee.h \
    Human.h \
    Volunteer.h \
    db.h \
    employeecreate.h \
    employeeshow.h \
    logfile.h \
    mainwindow.h \
    sqlite.h \
    volunteercreate.h \
    volunteershow.h

FORMS += \
    employeecreate.ui \
    employeeshow.ui \
    mainwindow.ui \
    volunteercreate.ui \
    volunteershow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
