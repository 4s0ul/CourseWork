#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "secondwindow.h"
#include "clientchoose.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_DoctorButton_clicked()
{
    hide();
    SecondWindow sec;
    sec.setModal(true);
    sec.exec();
}

void MainWindow::on_ClientButton_clicked()
{
    hide();
    ClientChoose sec;
    sec.setModal(true);
    sec.exec();
}
