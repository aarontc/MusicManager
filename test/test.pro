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
	flacmetadate.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"

QMAKE_POST_LINK += ./$${TARGET}


HEADERS += \
	flacmetadata.h
