#-------------------------------------------------
#
# Project created by QtCreator 2011-02-26T01:37:01
#
#-------------------------------------------------

QT       += core gui

TARGET = MusicManager
TEMPLATE = app


SOURCES += main.cpp\
		mainwindow.cpp \
	fileconverter.cpp \
	flacstream.cpp

HEADERS  += mainwindow.h \
	fileconverter.h \
	flacstream.h

FORMS    += mainwindow.ui

LIBS	+= -lFLAC++
