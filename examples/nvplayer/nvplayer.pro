#-------------------------------------------------
#
# Project created by QtCreator 2011-06-22T11:29:51
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = nvplayer
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

#NV101 library
message("NV101 library path: $(NV101_PATH)")
INCLUDEPATH += $(NV101_PATH)/src
LIBS += -L$(NV101_PATH)/bin \
        -lnv101


SOURCES += main.cpp \
    fwconsole.cpp

HEADERS += \
    fwconsole.h
