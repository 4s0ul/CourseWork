#include "wed.h"
#include "ui_wed.h"
#include <QtGui>
#include <QDebug>
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include "sqlite\sqlite3.h"

Wed::Wed(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Wed)
{
    ui->setupUi(this);
    this->setWindowTitle("Выбор доступного время для приема");
}

Wed::~Wed()
{
    delete ui;
}

void Wed::on_wedOK_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    if(ui->wed9->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Wed = 1 WHERE ID = 1");
    }

    if(ui->wed10->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Wed = 1 WHERE ID = 2");
    }

    if(ui->wed11->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Wed = 1 WHERE ID = 3");
    }

    if(ui->wed12->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Wed = 1 WHERE ID = 4");
    }

    if(ui->wed13->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Wed = 1 WHERE ID = 5");
    }

    if(ui->wed14->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Wed = 1 WHERE ID = 6");
    }

    if(ui->wed15->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Wed = 1 WHERE ID = 7");
    }

    if(ui->wed16->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Wed = 1 WHERE ID = 8");
    }

    if(ui->wed17->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Wed = 1 WHERE ID = 9");
    }

    dataBase.close();
}
