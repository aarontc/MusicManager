#-------------------------------------------------
#
# Project created by QtCreator 2011-05-14T20:53:47
#
#-------------------------------------------------

QT       += testlib

QT       -= gui

TARGET = tst_musicmanagertest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += tst_musicmanagertest.cpp \
	flacmetadata.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"

QMAKE_POST_LINK += ./$${TARGET}


LIBS += -L../src
LIBS += -lMusicManager


LIBS += -lFLAC++

HEADERS += \
	flacmetadata.h
