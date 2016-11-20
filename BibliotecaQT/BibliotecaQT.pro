#-------------------------------------------------
#
# Project created by QtCreator 2016-11-20T11:29:30
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BibliotecaQT
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    logindlg.cpp \
    connectiondb.cpp

HEADERS  += mainwindow.h \
    logindlg.h \
    connectiondb.h

FORMS    += mainwindow.ui \
    logindlg.ui

RESOURCES += \
    resources.qrc
