#include "sat.h"
#include "ui_sat.h"

sat::sat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sat)
{
    ui->setupUi(this);
    this->setWindowTitle("Выбор доступного время для приема");
}

sat::~sat()
{
    delete ui;
}

void sat::on_satOK_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    if(ui->sat9->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Sat = 1 WHERE ID = 1");
    }

    if(ui->sat10->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Sat = 1 WHERE ID = 2");
    }

    if(ui->sat11->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Sat = 1 WHERE ID = 3");
    }

    if(ui->sat12->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Sat = 1 WHERE ID = 4");
    }

    if(ui->sat13->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Sat = 1 WHERE ID = 5");
    }

    if(ui->sat14->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Sat = 1 WHERE ID = 6");
    }

    if(ui->sat15->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Sat = 1 WHERE ID = 7");
    }

    if(ui->sat16->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Sat = 1 WHERE ID = 8");
    }

    if(ui->sat17->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Sat = 1 WHERE ID = 9");
    }

    dataBase.close();
}
