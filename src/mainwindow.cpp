#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);

	LoadDefaultValues();
}

MainWindow::~MainWindow() {
	SaveDefaultValues();

	delete(ui);

	foreach(FileConverter* f, fileConverters) {
		f->terminate();
		delete(f);
	}
}

void MainWindow::LoadDefaultValues() {
	QSettings settings;
	settings.beginGroup("GUI Data");
	settings.beginGroup("MainWindow Defaults");

	ui->LE_InputFile->setText(settings.value("Input File").toString());
	ui->LE_OutputFile->setText(settings.value("Output File").toString());

}

void MainWindow::SaveDefaultValues() {
	QSettings settings;
	settings.beginGroup("GUI Data");
	settings.beginGroup("MainWindow Defaults");

	settings.setValue("Input File", ui->LE_InputFile->text());
	settings.setValue("Output File", ui->LE_OutputFile->text());
}
