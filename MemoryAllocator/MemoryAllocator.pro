#-------------------------------------------------
#
# Project created by QtCreator 2015-05-09T06:32:48
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MemoryAllocator
TEMPLATE = app


SOURCES += main.cpp\
        allocator.cpp \
    process.cpp \
    memory.cpp \
    diagram.cpp

HEADERS  += allocator.h \
    memory.h \
    partition.h \
    diagram.h

FORMS    += allocator.ui \
    diagram.ui
