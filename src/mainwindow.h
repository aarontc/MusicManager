#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include <QSettings>

#include "fileconverter.h"

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

private:
	Ui::MainWindow *ui;
	void LoadDefaultValues();
	void SaveDefaultValues();

	QList<FileConverter*> fileConverters;
};

#endif // MAINWINDOW_H
