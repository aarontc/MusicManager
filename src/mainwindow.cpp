#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
}

MainWindow::~MainWindow() {
	delete(ui);

	foreach(FileConverter* f, fileConverters) {
		f->terminate();
		delete(f);
	}
}

void MainWindow::on_pushButton_clicked() {
	FileConverter* f = new FileConverter();
	fileConverters.append(f);
	f->start();
}
