#include "DevelopWindow.h"
#include <fstream>
#include <QMessageBox>

DevelopWindow::DevelopWindow(Idea i, QWidget* parent)
	: idea{ i }, QWidget(parent)
{
	ui.setupUi(this);
	this->connect();
}

DevelopWindow::~DevelopWindow()
{
}

void DevelopWindow::connect()
{
	QWidget::connect(this->ui.savePushButton, &QPushButton::clicked, this, &DevelopWindow::save);
}

void DevelopWindow::save()
{
	std::ofstream f("develop.txt");
	f << this->ui.textEdit->toPlainText().toStdString();
	f.close();
	QMessageBox::information(this, "Status updated", "Idea developed successfully!");
}
