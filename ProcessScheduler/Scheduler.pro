#-------------------------------------------------
#
# Project created by QtCreator 2015-06-07T13:09:24
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Scheduler
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    process.cpp \
    processlist.cpp \
    iterator.cpp

HEADERS  += mainwindow.h \
    process.h \
    processlist.h \
    iterator.h

FORMS    += mainwindow.ui
