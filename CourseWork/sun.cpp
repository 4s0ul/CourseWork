#include "sun.h"
#include "ui_sun.h"
#include <QtGui>
#include <QDebug>
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include "sqlite\sqlite3.h"

sun::sun(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sun)
{
    ui->setupUi(this);
}

sun::~sun()
{
    delete ui;
}

void sun::on_sunOK_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    if(ui->sun9->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Sun = 1 WHERE ID = 1");
    }

    if(ui->sun10->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Sun = 1 WHERE ID = 2");
    }

    if(ui->sun11->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Sun = 1 WHERE ID = 3");
    }

    if(ui->sun12->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Sun = 1 WHERE ID = 4");
    }

    if(ui->sun13->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Sun = 1 WHERE ID = 5");
    }

    if(ui->sun14->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Sun = 1 WHERE ID = 6");
    }

    if(ui->sun15->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Sun = 1 WHERE ID = 7");
    }

    if(ui->sun16->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Sun = 1 WHERE ID = 8");
    }

    if(ui->sun17->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Sun = 1 WHERE ID = 9");
    }

    dataBase.close();
}
