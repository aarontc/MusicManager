#include "fileconverter.h"

#include <QDebug>

FileConverter::FileConverter() {
	inputFileName = "/tmp/testfile.flac";
	outputFileName = "/tmp/outfile.wav";
}


void FileConverter::run() {
	qDebug() << "Starting conversion from " << inputFileName << "to" << outputFileName;

	callback = new QTimer(NULL);
	connect(callback, SIGNAL(timeout()), this, SLOT(timerDone()));
	callback->setSingleShot(true);
	callback->start(10000);

	exec();
}


void FileConverter::timerDone() {
	qDebug() << "Conversion done";
	emit conversionDone();
	exit();
}
