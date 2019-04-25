#-------------------------------------------------
#
# Project created by QtCreator 2019-04-23T23:15:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Tarea_Corta_1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ejemplo.cpp \
    fabricaf.cpp \
    threadprocesos.cpp \
    List.cpp \
    Node.cpp \
    Proceso.cpp \
    Vehiculo.cpp

HEADERS  += mainwindow.h \
    time.h \
    ejemplo.h \
    fabricaf.h \
    threadprocesos.h \
    List.h \
    Node.h \
    Proceso.h \
    Vehiculo.h

FORMS    += mainwindow.ui \
    fabricaf.ui

QMAKE_CXXFLAGS += -std=gnu++11
