#-------------------------------------------------
#
# Project created by QtCreator 2014-12-12T13:20:40
#
#-------------------------------------------------

QT       += core gui network

CONFIG += c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Chat
TEMPLATE = app


SOURCES += main.cpp\
		mainwindow.cpp \
    connectdialog.cpp

HEADERS  += mainwindow.h \
    connectdialog.h

FORMS    += mainwindow.ui \
    connectdialog.ui
