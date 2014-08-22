TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

QMAKE_CFLAGS += -std=c11

SOURCES += main.c \
    ngossip.c

HEADERS += \
    ngossip.h
