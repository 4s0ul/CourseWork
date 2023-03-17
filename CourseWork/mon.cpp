#include "mon.h"
#include "ui_mon.h"
#include <QtGui>
#include <QDebug>
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include "sqlite\sqlite3.h"


mon::mon(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mon)
{
    ui->setupUi(this);
    this->setWindowTitle("Выбор доступного время для приема");

}

mon::~mon()
{
    delete ui;
}

void mon::on_monOK_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    if(ui->mon9->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Mon = 1 WHERE ID = 1");
    }

    if(ui->mon10->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Mon = 1 WHERE ID = 2");
    }

    if(ui->mon11->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Mon = 1 WHERE ID = 3");
    }

    if(ui->mon12->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Mon = 1 WHERE ID = 4");
    }

    if(ui->mon13->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Mon = 1 WHERE ID = 5");
    }

    if(ui->mon14->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Mon = 1 WHERE ID = 6");
    }

    if(ui->mon15->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Mon = 1 WHERE ID = 7");
    }

    if(ui->mon16->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Mon = 1 WHERE ID = 8");
    }

    if(ui->mon17->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Mon = 1 WHERE ID = 9");
    }

    dataBase.close();
}
