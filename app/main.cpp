#include <QtGui/QApplication>
#include "../src/mainwindow.h"

void SetApplicationValues();

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	SetApplicationValues();

	MainWindow w;
	w.setWindowTitle(QCoreApplication::applicationName() + " : " + QCoreApplication::applicationVersion());
	w.show();

	return a.exec();
}

void SetApplicationValues() {
	QCoreApplication::setOrganizationName("Made by AI");
	QCoreApplication::setOrganizationDomain("madebyai.com");
	QCoreApplication::setApplicationName("Music Manager");
	QCoreApplication::setApplicationVersion("0.01 beta");
}
