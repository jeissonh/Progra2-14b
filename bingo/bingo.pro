QT += core
QT -= gui

TEMPLATE = app
TARGET = bingo

CONFIG += console c++11
CONFIG -= app_bundle

SOURCES += main.cpp \
    BingoApp.cpp \
    Card.cpp

HEADERS += \
    BingoApp.h \
    Card.h
