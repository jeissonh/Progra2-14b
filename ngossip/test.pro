TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

QMAKE_CFLAGS += -std=c11

SOURCES += test.cpp \
    ngossip.c

HEADERS += \
    ngossip.h

OTHER_FILES += \
    Makefile

