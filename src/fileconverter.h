#ifndef FILECONVERTER_H
#define FILECONVERTER_H

#include <QThread>
#include <QString>
#include <QTimer>

class FileConverter : public QThread {
	Q_OBJECT

public:
	FileConverter();
	void run();


	QString inputFileName;
	QString outputFileName;
	QTimer* callback;



public slots:
	void timerDone();


signals:
	void conversionDone();

};

#endif // FILECONVERTER_H
