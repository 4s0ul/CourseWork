#include "worktime.h"
#include "ui_worktime.h"
#include "mon.h"
#include "tue.h"
#include "wed.h"
#include "thu.h"
#include "fri.h"
#include "sat.h"
#include "sun.h"
#include <QtGui>
#include <QDebug>
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include "sqlite\sqlite3.h"

worktime::worktime(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::worktime)
{
    ui->setupUi(this);
    readDbAndDisplayTable();
}

worktime::~worktime()
{
    delete ui;
}

void worktime::readDbAndDisplayTable()
{
   QString dbPath = "../CourseWork/database.db";
   QSqlDatabase dataBase;
   dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
   dataBase.setDatabaseName(dbPath);
   dataBase.open();

   if(!dataBase.open())
   {
       qDebug() <<"Database open Error" <<dataBase.lastError().text();
       return;
   }

   QSqlQuery query(dataBase);
   QString str = "SELECT * from Vrach_Free_Time";
   if(!query.exec(str))
   {

       qDebug() <<"Query exec failed";
       return;
   }

   ui->Vrach_Free_Time->setColumnCount(8);
   QStringList labels;
   labels << "Время" << "Пн" << "Вт" << "Ср" << "Чт" << "Пт" << "Сб" << "Вс";
   ui->Vrach_Free_Time->setHorizontalHeaderLabels(labels);

   int rowCount= 0;
   while(query.next())
   {
       ui->Vrach_Free_Time->insertRow(rowCount);
       QTableWidgetItem*Time = new QTableWidgetItem;
       QTableWidgetItem*Mon = new QTableWidgetItem;
       QTableWidgetItem*Tue = new QTableWidgetItem;
       QTableWidgetItem*Wed = new QTableWidgetItem;
       QTableWidgetItem*Thu = new QTableWidgetItem;
       QTableWidgetItem*Fri = new QTableWidgetItem;
       QTableWidgetItem*Sat = new QTableWidgetItem;
       QTableWidgetItem*Sun = new QTableWidgetItem;

       Time->setText(query.value(1).toString());
       Mon->setText(query.value(2).toString());
       Tue->setText(query.value(3).toString());
       Wed->setText(query.value(4).toString());
       Thu->setText(query.value(5).toString());
       Fri->setText(query.value(6).toString());
       Sat->setText(query.value(7).toString());
       Sun->setText(query.value(8).toString());

       ui->Vrach_Free_Time->setItem(rowCount,0,Time);
       ui->Vrach_Free_Time->setItem(rowCount,1,Mon);
       ui->Vrach_Free_Time->setItem(rowCount,2,Tue);
       ui->Vrach_Free_Time->setItem(rowCount,3,Wed);
       ui->Vrach_Free_Time->setItem(rowCount,4,Thu);
       ui->Vrach_Free_Time->setItem(rowCount,5,Fri);
       ui->Vrach_Free_Time->setItem(rowCount,6,Sat);
       ui->Vrach_Free_Time->setItem(rowCount,7,Sun);

       rowCount++;
   }

   dataBase.close();
   dataBase.open();

 QString strweek = "select Mon, Client_Choice_Mon.FIO, Client_Choice_Mon.Phone_Number, Tue, Client_Choice_Tue.FIO, Client_Choice_Tue.Phone_Number, Wed, Client_Choice_Wed.FIO, Client_Choice_Wed.Phone_Number, Thu, Client_Choice_Thu.FIO, Client_Choice_Thu.Phone_Number, Fri, Client_Choice_Fri.FIO, Client_Choice_Fri.Phone_Number, Sat, Client_Choice_Sat.FIO, Client_Choice_Sat.Phone_Number, Sun, Client_Choice_Sun.FIO, Client_Choice_Sun.Phone_Number  from Client_Choice_Mon, Client_Choice_Tue, Client_Choice_Wed, Client_Choice_Thu, Client_Choice_Fri, Client_Choice_Sat, Client_Choice_Sun where Client_Choice_Mon.ID = Client_Choice_Tue.ID and Client_Choice_Mon.ID =  Client_Choice_Wed.ID and Client_Choice_Mon.ID = Client_Choice_Thu.ID and Client_Choice_Mon.ID = Client_Choice_Fri.ID and Client_Choice_Mon.ID = Client_Choice_Sat.ID and Client_Choice_Mon.ID = Client_Choice_Sun.ID;";

          if(!query.exec(strweek))
         {

             qDebug() <<"Query exec failed";
              return;
         }

           ui->Client_Choice->setColumnCount(21);
                  QStringList labels1;
                  labels1 << "Пн" << "ФИО" << "Номер телефона" << "Вт" << "ФИО" << "Номер телефона"<< "Ср" << "ФИО" << "Номер телефона" << "Чт" << "ФИО" << "Номер телефона"<< "Пт" << "ФИО" << "Номер телефона" << "Сб" << "ФИО" << "Номер телефона" << "Вс" << "ФИО" << "Номер телефона";
                  ui->Client_Choice->setHorizontalHeaderLabels(labels1);

                int rowCount1= 0;
                 while(query.next())
                 {
                    ui->Client_Choice->insertRow(rowCount1);
                    QTableWidgetItem*Mon = new QTableWidgetItem;
                    QTableWidgetItem*FIO = new QTableWidgetItem;
                    QTableWidgetItem*Phone_Number = new QTableWidgetItem;
                    QTableWidgetItem*Tue = new QTableWidgetItem;
                    QTableWidgetItem*FIO1 = new QTableWidgetItem;
                    QTableWidgetItem*Phone_Number1 = new QTableWidgetItem;
                    QTableWidgetItem*Wed = new QTableWidgetItem;
                    QTableWidgetItem*FIO2 = new QTableWidgetItem;
                    QTableWidgetItem*Phone_Number2 = new QTableWidgetItem;
                    QTableWidgetItem*Thu = new QTableWidgetItem;
                    QTableWidgetItem*FIO3 = new QTableWidgetItem;
                    QTableWidgetItem*Phone_Number3 = new QTableWidgetItem;
                    QTableWidgetItem*Fri = new QTableWidgetItem;
                    QTableWidgetItem*FIO4 = new QTableWidgetItem;
                    QTableWidgetItem*Phone_Number4 = new QTableWidgetItem;
                    QTableWidgetItem*Sat = new QTableWidgetItem;
                    QTableWidgetItem*FIO5 = new QTableWidgetItem;
                    QTableWidgetItem*Phone_Number5 = new QTableWidgetItem;
                    QTableWidgetItem*Sun = new QTableWidgetItem;
                    QTableWidgetItem*FIO6 = new QTableWidgetItem;
                    QTableWidgetItem*Phone_Number6 = new QTableWidgetItem;

                    Mon->setText(query.value(0).toString());
                    FIO->setText(query.value(1).toString());
                    Phone_Number->setText(query.value(2).toString());
                    Tue->setText(query.value(3).toString());
                    FIO1->setText(query.value(4).toString());
                    Phone_Number1->setText(query.value(5).toString());
                    Wed->setText(query.value(6).toString());
                    FIO2->setText(query.value(7).toString());
                    Phone_Number2->setText(query.value(8).toString());
                    Thu->setText(query.value(9).toString());
                    FIO3->setText(query.value(10).toString());
                    Phone_Number3->setText(query.value(11).toString());
                    Fri->setText(query.value(12).toString());
                    FIO4->setText(query.value(13).toString());
                    Phone_Number4->setText(query.value(14).toString());
                    Sat->setText(query.value(15).toString());
                    FIO5->setText(query.value(16).toString());
                    Phone_Number5->setText(query.value(17).toString());
                    Sun->setText(query.value(18).toString());
                    FIO6->setText(query.value(19).toString());
                    Phone_Number6->setText(query.value(20).toString());

                    ui->Client_Choice->setItem(rowCount1,0,Mon);
                    ui->Client_Choice->setItem(rowCount1,1,FIO);
                    ui->Client_Choice->setItem(rowCount1,2,Phone_Number);
                    ui->Client_Choice->setItem(rowCount1,3,Tue);
                    ui->Client_Choice->setItem(rowCount1,4,FIO1);
                    ui->Client_Choice->setItem(rowCount1,5,Phone_Number1);
                    ui->Client_Choice->setItem(rowCount1,6, Wed);
                    ui->Client_Choice->setItem(rowCount1,7, FIO2);
                    ui->Client_Choice->setItem(rowCount1,8,Phone_Number2);
                    ui->Client_Choice->setItem(rowCount1,9,Thu);
                    ui->Client_Choice->setItem(rowCount1,10,FIO3);
                    ui->Client_Choice->setItem(rowCount1,11,Phone_Number3);
                    ui->Client_Choice->setItem(rowCount1,12,Fri);
                    ui->Client_Choice->setItem(rowCount1,13,FIO4);
                    ui->Client_Choice->setItem(rowCount1,14,Phone_Number4);
                    ui->Client_Choice->setItem(rowCount1,15,Sat);
                    ui->Client_Choice->setItem(rowCount1,16,FIO5);
                    ui->Client_Choice->setItem(rowCount1,17,Phone_Number5);
                    ui->Client_Choice->setItem(rowCount1,18,Sun);
                    ui->Client_Choice->setItem(rowCount1,19,FIO6);
                    ui->Client_Choice->setItem(rowCount1,20,Phone_Number6);

                    rowCount1++;
               }

     dataBase.close();

}

void worktime::on_mon_clicked()
{
    mon sec;
    sec.setModal(true);
    sec.exec();
}

void worktime::on_tue_clicked()
{
    tue sec;
    sec.setModal(true);
    sec.exec();
}



void worktime::on_wed_clicked()
{
    Wed sec;
    sec.setModal(true);
    sec.exec();
}

void worktime::on_thu_clicked()
{
    Thu sec;
    sec.setModal(true);
    sec.exec();
}

void worktime::on_fri_clicked()
{
    fri sec;
    sec.setModal(true);
    sec.exec();
}

void worktime::on_sat_clicked()
{
    sat sec;
    sec.setModal(true);
    sec.exec();
}

void worktime::on_sun_clicked()
{
    sun sec;
    sec.setModal(true);
    sec.exec();
}

void worktime::on_pushButton_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);
    query.exec("UPDATE Vrach_Free_Time SET Mon = 0, Tue = 0, Wed = 0, Thu = 0, Fri = 0, Sat = 0, Sun = 0  WHERE ID = 1");
    query.exec("UPDATE Vrach_Free_Time SET Mon = 0, Tue = 0, Wed = 0, Thu = 0, Fri = 0, Sat = 0, Sun = 0  WHERE ID = 2");
    query.exec("UPDATE Vrach_Free_Time SET Mon = 0, Tue = 0, Wed = 0, Thu = 0, Fri = 0, Sat = 0, Sun = 0  WHERE ID = 3");
    query.exec("UPDATE Vrach_Free_Time SET Mon = 0, Tue = 0, Wed = 0, Thu = 0, Fri = 0, Sat = 0, Sun = 0  WHERE ID = 4");
    query.exec("UPDATE Vrach_Free_Time SET Mon = 0, Tue = 0, Wed = 0, Thu = 0, Fri = 0, Sat = 0, Sun = 0  WHERE ID = 5");
    query.exec("UPDATE Vrach_Free_Time SET Mon = 0, Tue = 0, Wed = 0, Thu = 0, Fri = 0, Sat = 0, Sun = 0  WHERE ID = 6");
    query.exec("UPDATE Vrach_Free_Time SET Mon = 0, Tue = 0, Wed = 0, Thu = 0, Fri = 0, Sat = 0, Sun = 0  WHERE ID = 7");
    query.exec("UPDATE Vrach_Free_Time SET Mon = 0, Tue = 0, Wed = 0, Thu = 0, Fri = 0, Sat = 0, Sun = 0  WHERE ID = 8");
    query.exec("UPDATE Vrach_Free_Time SET Mon = 0, Tue = 0, Wed = 0, Thu = 0, Fri = 0, Sat = 0, Sun = 0  WHERE ID = 9");
    dataBase.close();
}

void worktime::on_ClearPatients_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);
    query.exec("UPDATE Client_Choice_Mon SET Mon = 0, FIO = '', Phone_Number = '' WHERE ID = 1");
    query.exec("UPDATE Client_Choice_Mon SET Mon = 0, FIO = '', Phone_Number = '' WHERE ID = 2");
    query.exec("UPDATE Client_Choice_Mon SET Mon = 0, FIO = '', Phone_Number = '' WHERE ID = 3");
    query.exec("UPDATE Client_Choice_Mon SET Mon = 0, FIO = '', Phone_Number = '' WHERE ID = 4");
    query.exec("UPDATE Client_Choice_Mon SET Mon = 0, FIO = '', Phone_Number = '' WHERE ID = 5");
    query.exec("UPDATE Client_Choice_Mon SET Mon = 0, FIO = '', Phone_Number = '' WHERE ID = 6");
    query.exec("UPDATE Client_Choice_Mon SET Mon = 0, FIO = '', Phone_Number = '' WHERE ID = 7");
    query.exec("UPDATE Client_Choice_Mon SET Mon = 0, FIO = '', Phone_Number = '' WHERE ID = 8");
    query.exec("UPDATE Client_Choice_Mon SET Mon = 0, FIO = '', Phone_Number = '' WHERE ID = 9");

    query.exec("UPDATE Client_Choice_Tue SET Tue = 0, FIO = '', Phone_Number = '' WHERE ID = 1");
    query.exec("UPDATE Client_Choice_Tue SET Tue = 0, FIO = '', Phone_Number = '' WHERE ID = 2");
    query.exec("UPDATE Client_Choice_Tue SET Tue = 0, FIO = '', Phone_Number = '' WHERE ID = 3");
    query.exec("UPDATE Client_Choice_Tue SET Tue = 0, FIO = '', Phone_Number = '' WHERE ID = 4");
    query.exec("UPDATE Client_Choice_Tue SET Tue = 0, FIO = '', Phone_Number = '' WHERE ID = 5");
    query.exec("UPDATE Client_Choice_Tue SET Tue = 0, FIO = '', Phone_Number = '' WHERE ID = 6");
    query.exec("UPDATE Client_Choice_Tue SET Tue = 0, FIO = '', Phone_Number = '' WHERE ID = 7");
    query.exec("UPDATE Client_Choice_Tue SET Tue = 0, FIO = '', Phone_Number = '' WHERE ID = 8");
    query.exec("UPDATE Client_Choice_Tue SET Tue = 0, FIO = '', Phone_Number = '' WHERE ID = 9");

    query.exec("UPDATE Client_Choice_Wed SET Wed = 0, FIO = '', Phone_Number = '' WHERE ID = 1");
    query.exec("UPDATE Client_Choice_Wed SET Wed = 0, FIO = '', Phone_Number = '' WHERE ID = 2");
    query.exec("UPDATE Client_Choice_Wed SET Wed = 0, FIO = '', Phone_Number = '' WHERE ID = 3");
    query.exec("UPDATE Client_Choice_Wed SET Wed = 0, FIO = '', Phone_Number = '' WHERE ID = 4");
    query.exec("UPDATE Client_Choice_Wed SET Wed = 0, FIO = '', Phone_Number = '' WHERE ID = 5");
    query.exec("UPDATE Client_Choice_Wed SET Wed = 0, FIO = '', Phone_Number = '' WHERE ID = 6");
    query.exec("UPDATE Client_Choice_Wed SET Wed = 0, FIO = '', Phone_Number = '' WHERE ID = 7");
    query.exec("UPDATE Client_Choice_Wed SET Wed = 0, FIO = '', Phone_Number = '' WHERE ID = 8");
    query.exec("UPDATE Client_Choice_Wed SET Wed = 0, FIO = '', Phone_Number = '' WHERE ID = 9");

    query.exec("UPDATE Client_Choice_Thu SET Thu = 0, FIO = '', Phone_Number = '' WHERE ID = 1");
    query.exec("UPDATE Client_Choice_Thu SET Thu = 0, FIO = '', Phone_Number = '' WHERE ID = 2");
    query.exec("UPDATE Client_Choice_Thu SET Thu = 0, FIO = '', Phone_Number = '' WHERE ID = 3");
    query.exec("UPDATE Client_Choice_Thu SET Thu = 0, FIO = '', Phone_Number = '' WHERE ID = 4");
    query.exec("UPDATE Client_Choice_Thu SET Thu = 0, FIO = '', Phone_Number = '' WHERE ID = 5");
    query.exec("UPDATE Client_Choice_Thu SET Thu = 0, FIO = '', Phone_Number = '' WHERE ID = 6");
    query.exec("UPDATE Client_Choice_Thu SET Thu = 0, FIO = '', Phone_Number = '' WHERE ID = 7");
    query.exec("UPDATE Client_Choice_Thu SET Thu = 0, FIO = '', Phone_Number = '' WHERE ID = 8");
    query.exec("UPDATE Client_Choice_Thu SET Thu = 0, FIO = '', Phone_Number = '' WHERE ID = 9");

    query.exec("UPDATE Client_Choice_Fri SET Fri = 0, FIO = '', Phone_Number = '' WHERE ID = 1");
    query.exec("UPDATE Client_Choice_Fri SET Fri = 0, FIO = '', Phone_Number = '' WHERE ID = 2");
    query.exec("UPDATE Client_Choice_Fri SET Fri = 0, FIO = '', Phone_Number = '' WHERE ID = 3");
    query.exec("UPDATE Client_Choice_Fri SET Fri = 0, FIO = '', Phone_Number = '' WHERE ID = 4");
    query.exec("UPDATE Client_Choice_Fri SET Fri = 0, FIO = '', Phone_Number = '' WHERE ID = 5");
    query.exec("UPDATE Client_Choice_Fri SET Fri = 0, FIO = '', Phone_Number = '' WHERE ID = 6");
    query.exec("UPDATE Client_Choice_Fri SET Fri = 0, FIO = '', Phone_Number = '' WHERE ID = 7");
    query.exec("UPDATE Client_Choice_Fri SET Fri = 0, FIO = '', Phone_Number = '' WHERE ID = 8");
    query.exec("UPDATE Client_Choice_Fri SET Fri = 0, FIO = '', Phone_Number = '' WHERE ID = 9");

    query.exec("UPDATE Client_Choice_Sat SET Sat = 0, FIO = '', Phone_Number = '' WHERE ID = 1");
    query.exec("UPDATE Client_Choice_Sat SET Sat = 0, FIO = '', Phone_Number = '' WHERE ID = 2");
    query.exec("UPDATE Client_Choice_Sat SET Sat = 0, FIO = '', Phone_Number = '' WHERE ID = 3");
    query.exec("UPDATE Client_Choice_Sat SET Sat = 0, FIO = '', Phone_Number = '' WHERE ID = 4");
    query.exec("UPDATE Client_Choice_Sat SET Sat = 0, FIO = '', Phone_Number = '' WHERE ID = 5");
    query.exec("UPDATE Client_Choice_Sat SET Sat = 0, FIO = '', Phone_Number = '' WHERE ID = 6");
    query.exec("UPDATE Client_Choice_Sat SET Sat = 0, FIO = '', Phone_Number = '' WHERE ID = 7");
    query.exec("UPDATE Client_Choice_Sat SET Sat = 0, FIO = '', Phone_Number = '' WHERE ID = 8");
    query.exec("UPDATE Client_Choice_Sat SET Sat = 0, FIO = '', Phone_Number = '' WHERE ID = 9");

    query.exec("UPDATE Client_Choice_Sun SET Sun = 0, FIO = '', Phone_Number = '' WHERE ID = 1");
    query.exec("UPDATE Client_Choice_Sun SET Sun = 0, FIO = '', Phone_Number = '' WHERE ID = 2");
    query.exec("UPDATE Client_Choice_Sun SET Sun = 0, FIO = '', Phone_Number = '' WHERE ID = 3");
    query.exec("UPDATE Client_Choice_Sun SET Sun = 0, FIO = '', Phone_Number = '' WHERE ID = 4");
    query.exec("UPDATE Client_Choice_Sun SET Sun = 0, FIO = '', Phone_Number = '' WHERE ID = 5");
    query.exec("UPDATE Client_Choice_Sun SET Sun = 0, FIO = '', Phone_Number = '' WHERE ID = 6");
    query.exec("UPDATE Client_Choice_Sun SET Sun = 0, FIO = '', Phone_Number = '' WHERE ID = 7");
    query.exec("UPDATE Client_Choice_Sun SET Sun = 0, FIO = '', Phone_Number = '' WHERE ID = 8");
    query.exec("UPDATE Client_Choice_Sun SET Sun = 0, FIO = '', Phone_Number = '' WHERE ID = 9");

    dataBase.close();

}
