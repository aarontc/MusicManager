#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "fileconverter.h"
#include <QList>

namespace Ui {
	class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

private slots:
	void on_pushButton_clicked();

private:
	Ui::MainWindow *ui;
	QList<FileConverter*> fileConverters;
};

#endif // MAINWINDOW_H
