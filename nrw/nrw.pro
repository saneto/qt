#-------------------------------------------------
#
# Project created by QtCreator 2015-03-10T11:45:08
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = nrw
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ClientTcp.cpp

HEADERS  += mainwindow.h \
    ClientTcp.h

FORMS    += mainwindow.ui
