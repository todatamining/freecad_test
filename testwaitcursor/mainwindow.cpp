#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "WaitCursor.h"
#include <QMessageBox>
#include <QThread>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Gui::WaitCursor wc;
    QThread::sleep(5);
}
