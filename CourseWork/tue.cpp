#include "tue.h"
#include "ui_tue.h"
#include <QtGui>
#include <QDebug>
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include "sqlite\sqlite3.h"

tue::tue(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tue)
{
    ui->setupUi(this);
    this->setWindowTitle("Выбор доступного время для приема");
}

tue::~tue()
{
    delete ui;
}

void tue::on_tueOK_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    if(ui->tue9->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Tue = 1 WHERE ID = 1");
    }

    if(ui->tue10->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Tue = 1 WHERE ID = 2");
    }

    if(ui->tue11->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Tue = 1 WHERE ID = 3");
    }

    if(ui->tue12->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Tue = 1 WHERE ID = 4");
    }

    if(ui->tue13->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Tue = 1 WHERE ID = 5");
    }

    if(ui->tue14->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Tue = 1 WHERE ID = 6");
    }

    if(ui->tue15->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Tue = 1 WHERE ID = 7");
    }

    if(ui->tue16->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Tue = 1 WHERE ID = 8");
    }

    if(ui->tue17->isChecked())
    {
        query.exec("UPDATE Vrach_Free_Time SET Tue = 1 WHERE ID = 9");
    }

    dataBase.close();
}
