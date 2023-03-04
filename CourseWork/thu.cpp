#include "thu.h"
#include "ui_thu.h"
#include <QtGui>
#include <QDebug>
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include "sqlite\sqlite3.h"

Thu::Thu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Thu)
{
    ui->setupUi(this);
}

Thu::~Thu()
{
    delete ui;
}

void Thu::on_thuOK_clicked()
{   
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    if(ui->thu9->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Thu = 1 WHERE ID = 1");
    }

    if(ui->thu10->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Thu = 1 WHERE ID = 2");
    }

    if(ui->thu11->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Thu = 1 WHERE ID = 3");
    }

    if(ui->thu12->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Thu = 1 WHERE ID = 4");
    }

    if(ui->thu13->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Thu = 1 WHERE ID = 5");
    }

    if(ui->thu14->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Thu = 1 WHERE ID = 6");
    }

    if(ui->thu15->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Thu = 1 WHERE ID = 7");
    }

    if(ui->thu16->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Thu = 1 WHERE ID = 8");
    }

    if(ui->thu17->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Thu = 1 WHERE ID = 9");
    }

    dataBase.close();
}
