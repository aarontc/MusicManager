#include <QtGui/QApplication>
#include "mainwindow.h"

#include "fileconverter.h"

int main(int argc, char *argv[]) {
	QApplication a(argc, argv);
	MainWindow w;
	w.show();


	FileConverter x;
	x.start();

	return a.exec();
}
