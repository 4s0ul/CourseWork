#include "secondwindow.h"
#include "ui_secondwindow.h"
#include <QMessageBox>
#include "worktime.h"

SecondWindow::SecondWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Вход в учетную запись");

}

SecondWindow::~SecondWindow()
{
    delete ui;
}

void SecondWindow::on_Avtor_clicked()
{
    QString Login = ui->Login->text();
    QString Password = ui->Password->text();

    if(Login == "" && Password == "")
    {
        worktime sec;
        sec.setModal(true);
        sec.exec();;
    }
    else
    {
        QMessageBox::warning(this, "Ошибка!", "Введен неверный логин или пароль!");
    }
}
