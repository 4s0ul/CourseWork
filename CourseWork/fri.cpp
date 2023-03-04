#include "fri.h"
#include "ui_fri.h"
#include <QtGui>
#include <QDebug>
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include "sqlite\sqlite3.h"

fri::fri(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fri)
{
    ui->setupUi(this);
}

fri::~fri()
{
    delete ui;
}

void fri::on_friOK_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    if(ui->fri9->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Fri = 1 WHERE ID = 1");
    }

    if(ui->fri10->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Fri = 1 WHERE ID = 2");
    }

    if(ui->fri11->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Fri = 1 WHERE ID = 3");
    }

    if(ui->fri12->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Fri = 1 WHERE ID = 4");
    }

    if(ui->fri13->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Fri = 1 WHERE ID = 5");
    }

    if(ui->fri14->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Fri = 1 WHERE ID = 6");
    }

    if(ui->fri15->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Fri = 1 WHERE ID = 7");
    }

    if(ui->fri16->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Fri = 1 WHERE ID = 8");
    }

    if(ui->fri17->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Fri = 1 WHERE ID = 9");
    }

    dataBase.close();
}
