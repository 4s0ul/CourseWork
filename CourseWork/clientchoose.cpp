#include "clientchoose.h"
#include "ui_clientchoose.h"
#include <QtGui>
#include <QDebug>
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include "sqlite\sqlite3.h"
#include <QMessageBox>

ClientChoose::ClientChoose(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClientChoose)
{
    ui->setupUi(this);
    this->setWindowTitle("Запись ко врачу");
    on_Possible_Time_cellActivated();
    readDbAndDisplayTable();
}

ClientChoose::~ClientChoose()
{
    delete ui;
}

void ClientChoose::readDbAndDisplayTable()
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

    ui->Possible_Time->setColumnCount(8);
    QStringList labels;
    labels << "Время" << "Пн" << "Вт" << "Ср" << "Чт" << "Пт" << "Сб" << "Вс";
    ui->Possible_Time->setHorizontalHeaderLabels(labels);

    int rowCount= 0;
    while(query.next())
    {
        ui->Possible_Time->insertRow(rowCount);
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

        ui->Possible_Time->setItem(rowCount,0,Time);
        ui->Possible_Time->setItem(rowCount,1,Mon);
        ui->Possible_Time->setItem(rowCount,2,Tue);
        ui->Possible_Time->setItem(rowCount,3,Wed);
        ui->Possible_Time->setItem(rowCount,4,Thu);
        ui->Possible_Time->setItem(rowCount,5,Fri);
        ui->Possible_Time->setItem(rowCount,6,Sat);
        ui->Possible_Time->setItem(rowCount,7,Sun);

        rowCount++;
    }

    dataBase.close();
}






void ClientChoose::on_Possible_Time_cellActivated()
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
    QString str = "select Mon, Tue Wed, Thu, Fri, Sat, Sun from Vrach_Free_Time";
    if(!query.exec(str))
    {

        qDebug() <<"Query exec failed";
        return;
    }

    QByteArray templ;
    QByteArray templ1;
    QByteArray templ2;
    QByteArray templ3;
    QByteArray templ4;
    QByteArray templ5;
    QByteArray templ6;
    QByteArray templ7;
    QByteArray templ8;
    QByteArray templ9;
    QByteArray templ10;
    QByteArray templ11;
    QByteArray templ12;
    QByteArray templ13;
    QByteArray templ14;
    QByteArray templ15;
    QByteArray templ16;
    QByteArray templ17;
    QByteArray templ18;
    QByteArray templ19;
    QByteArray templ20;
    QByteArray templ21;
    QByteArray templ22;
    QByteArray templ23;
    QByteArray templ24;
    QByteArray templ25;
    QByteArray templ26;
    QByteArray templ27;
    QByteArray templ28;
    QByteArray templ29;
    QByteArray templ30;
    QByteArray templ31;
    QByteArray templ32;
    QByteArray templ33;
    QByteArray templ34;
    QByteArray templ35;
    QByteArray templ36;
    QByteArray templ37;
    QByteArray templ38;
    QByteArray templ39;
    QByteArray templ40;
    QByteArray templ41;
    QByteArray templ42;
    QByteArray templ43;
    QByteArray templ44;
    QByteArray templ45;
    QByteArray templ46;
    QByteArray templ47;
    QByteArray templ48;
    QByteArray templ49;
    QByteArray templ50;
    QByteArray templ51;
    QByteArray templ52;
    QByteArray templ53;
    QByteArray templ54;
    QByteArray templ55;
    QByteArray templ56;
    QByteArray templ57;
    QByteArray templ58;
    QByteArray templ59;
    QByteArray templ60;
    QByteArray templ61;
    QByteArray templ62;
    QByteArray templ63;
    QByteArray templ64;
    QByteArray templ65;
    QByteArray templ66;
    QByteArray templ67;
    QByteArray templ68;
    QByteArray templ69;
    QByteArray templ70;
    QByteArray templ71;
    QByteArray templ72;
    QByteArray templ73;
    QByteArray templ74;
    QByteArray templ75;
    QByteArray templ76;
    QByteArray templ77;
    QByteArray templ78;
    QByteArray templ79;
    QByteArray templ80;
    QByteArray templ81;
    QByteArray templ82;
    QByteArray templ83;
    QByteArray templ84;
    QByteArray templ85;
    QByteArray templ86;
    QByteArray templ87;
    QByteArray templ88;
    QByteArray templ89;
    QByteArray templ90;
    QByteArray templ91;
    QByteArray templ92;
    QByteArray templ93;
    QByteArray templ94;
    QByteArray templ95;
    QByteArray templ96;
    QByteArray templ97;
    QByteArray templ98;
    QByteArray templ99;
    QByteArray templ100;
    QByteArray templ101;
    QByteArray templ102;
    QByteArray templ103;
    QByteArray templ104;
    QByteArray templ105;
    QByteArray templ106;
    QByteArray templ107;
    QByteArray templ108;
    QByteArray templ109;
    QByteArray templ110;
    QByteArray templ111;
    QByteArray templ112;
    QByteArray templ113;
    QByteArray templ114;
    QByteArray templ115;
    QByteArray templ116;
    QByteArray templ117;
    QByteArray templ118;
    QByteArray templ119;
    QByteArray templ120;
    QByteArray templ121;
    QByteArray templ122;
    QByteArray templ123;
    QByteArray templ124;
    QByteArray templ125;

    QByteArray a="0";
    QByteArray b="1";

    if(query.exec("select Mon from Vrach_Free_Time"))
    {

        if(query.next()) templ=query.value(0).toByteArray();
        if(query.next()) templ1=query.value(0).toByteArray();
        if(query.next()) templ2=query.value(0).toByteArray();
        if(query.next()) templ3=query.value(0).toByteArray();
        if(query.next()) templ4=query.value(0).toByteArray();
        if(query.next()) templ5=query.value(0).toByteArray();
        if(query.next()) templ6=query.value(0).toByteArray();
        if(query.next()) templ7=query.value(0).toByteArray();
        if(query.next()) templ8=query.value(0).toByteArray();

    }

    if(query.exec("select Mon from Client_Choice_Mon"))
    {
        if(query.next()) templ63=query.value(0).toByteArray();
        if(query.next()) templ64=query.value(0).toByteArray();
        if(query.next()) templ65=query.value(0).toByteArray();
        if(query.next()) templ66=query.value(0).toByteArray();
        if(query.next()) templ67=query.value(0).toByteArray();
        if(query.next()) templ68=query.value(0).toByteArray();
        if(query.next()) templ69=query.value(0).toByteArray();
        if(query.next()) templ70=query.value(0).toByteArray();
        if(query.next()) templ71=query.value(0).toByteArray();
    }

    if((templ==a) || (templ63==b)) ui->Zapis->hide();
    if((templ1==a) || (templ64==b)) ui->Zapis1->hide();
    if(templ2==a || templ65==b) ui->Zapis2->hide();
    if(templ3==a || templ66==b) ui->Zapis3->hide();
    if(templ4==a || templ67==b) ui->Zapis4->hide();
    if(templ5==a || templ68==b) ui->Zapis5->hide();
    if(templ6==a || templ69==b) ui->Zapis6->hide();
    if(templ7==a || templ70==b) ui->Zapis7->hide();
    if(templ8==a || templ71==b) ui->Zapis8->hide();

    if(query.exec("select Tue from Vrach_Free_Time"))
    {
        if(query.next()) templ9=query.value(0).toByteArray();
        if(query.next()) templ10=query.value(0).toByteArray();
        if(query.next()) templ11=query.value(0).toByteArray();
        if(query.next()) templ12=query.value(0).toByteArray();
        if(query.next()) templ13=query.value(0).toByteArray();
        if(query.next()) templ14=query.value(0).toByteArray();
        if(query.next()) templ15=query.value(0).toByteArray();
        if(query.next()) templ16=query.value(0).toByteArray();
        if(query.next()) templ17=query.value(0).toByteArray();
    }

    if(query.exec("select Tue from Client_Choice_Tue"))
    {
        if(query.next()) templ72=query.value(0).toByteArray();
        if(query.next()) templ73=query.value(0).toByteArray();
        if(query.next()) templ74=query.value(0).toByteArray();
        if(query.next()) templ75=query.value(0).toByteArray();
        if(query.next()) templ76=query.value(0).toByteArray();
        if(query.next()) templ77=query.value(0).toByteArray();
        if(query.next()) templ78=query.value(0).toByteArray();
        if(query.next()) templ79=query.value(0).toByteArray();
        if(query.next()) templ80=query.value(0).toByteArray();
    }

    if(templ9==a || templ72==b) ui->Zapis10->hide();
    if(templ10==a || templ73==b) ui->Zapis11->hide();
    if(templ11==a || templ74==b) ui->Zapis12->hide();
    if(templ12==a || templ75==b) ui->Zapis13->hide();
    if(templ13==a || templ76==b) ui->Zapis14->hide();
    if(templ14==a || templ77==b) ui->Zapis15->hide();
    if(templ15==a || templ78==b) ui->Zapis16->hide();
    if(templ16==a || templ79==b) ui->Zapis17->hide();
    if(templ17==a || templ80==b) ui->Zapis18->hide();

    if(query.exec("select Wed from Vrach_Free_Time"))
    {
        if(query.next()) templ18=query.value(0).toByteArray();
        if(query.next()) templ19=query.value(0).toByteArray();
        if(query.next()) templ20=query.value(0).toByteArray();
        if(query.next()) templ21=query.value(0).toByteArray();
        if(query.next()) templ22=query.value(0).toByteArray();
        if(query.next()) templ23=query.value(0).toByteArray();
        if(query.next()) templ24=query.value(0).toByteArray();
        if(query.next()) templ25=query.value(0).toByteArray();
        if(query.next()) templ26=query.value(0).toByteArray();
    }

    if(query.exec("select Wed from Client_Choice_Wed"))
    {
        if(query.next()) templ81=query.value(0).toByteArray();
        if(query.next()) templ82=query.value(0).toByteArray();
        if(query.next()) templ83=query.value(0).toByteArray();
        if(query.next()) templ84=query.value(0).toByteArray();
        if(query.next()) templ85=query.value(0).toByteArray();
        if(query.next()) templ86=query.value(0).toByteArray();
        if(query.next()) templ87=query.value(0).toByteArray();
        if(query.next()) templ88=query.value(0).toByteArray();
        if(query.next()) templ89=query.value(0).toByteArray();
    }

    if(templ18==a || templ81==b) ui->Zapis19->hide();
    if(templ19==a || templ82==b) ui->Zapis20->hide();
    if(templ20==a || templ83==b) ui->Zapis21->hide();
    if(templ21==a || templ84==b) ui->Zapis22->hide();
    if(templ22==a || templ85==b) ui->Zapis23->hide();
    if(templ23==a || templ86==b) ui->Zapis24->hide();
    if(templ24==a || templ87==b) ui->Zapis25->hide();
    if(templ25==a || templ88==b) ui->Zapis26->hide();
    if(templ26==a || templ89==b) ui->Zapis27->hide();

    if(query.exec("select Thu from Vrach_Free_Time"))
    {
        if(query.next()) templ27=query.value(0).toByteArray();
        if(query.next()) templ28=query.value(0).toByteArray();
        if(query.next()) templ29=query.value(0).toByteArray();
        if(query.next()) templ30=query.value(0).toByteArray();
        if(query.next()) templ31=query.value(0).toByteArray();
        if(query.next()) templ32=query.value(0).toByteArray();
        if(query.next()) templ33=query.value(0).toByteArray();
        if(query.next()) templ34=query.value(0).toByteArray();
        if(query.next()) templ35=query.value(0).toByteArray();
    }

    if(query.exec("select Thu from Client_Choice_Thu"))
    {
        if(query.next()) templ90=query.value(0).toByteArray();
        if(query.next()) templ91=query.value(0).toByteArray();
        if(query.next()) templ92=query.value(0).toByteArray();
        if(query.next()) templ93=query.value(0).toByteArray();
        if(query.next()) templ94=query.value(0).toByteArray();
        if(query.next()) templ95=query.value(0).toByteArray();
        if(query.next()) templ96=query.value(0).toByteArray();
        if(query.next()) templ97=query.value(0).toByteArray();
        if(query.next()) templ98=query.value(0).toByteArray();
    }

    if(templ27==a || templ90==b) ui->Zapis28->hide();
    if(templ28==a || templ91==b) ui->Zapis29->hide();
    if(templ29==a || templ92==b) ui->Zapis30->hide();
    if(templ30==a || templ93==b) ui->Zapis31->hide();
    if(templ31==a || templ94==b) ui->Zapis32->hide();
    if(templ32==a || templ95==b) ui->Zapis33->hide();
    if(templ33==a || templ96==b) ui->Zapis34->hide();
    if(templ34==a || templ97==b) ui->Zapis35->hide();
    if(templ35==a || templ98==b) ui->Zapis36->hide();

    if(query.exec("select Fri from Vrach_Free_Time"))
    {

        if(query.next()) templ36=query.value(0).toByteArray();
        if(query.next()) templ37=query.value(0).toByteArray();
        if(query.next()) templ38=query.value(0).toByteArray();
        if(query.next()) templ39=query.value(0).toByteArray();
        if(query.next()) templ40=query.value(0).toByteArray();
        if(query.next()) templ41=query.value(0).toByteArray();
        if(query.next()) templ42=query.value(0).toByteArray();
        if(query.next()) templ43=query.value(0).toByteArray();
        if(query.next()) templ44=query.value(0).toByteArray();
    }

    if(query.exec("select Fri from Client_Choice_Fri"))
    {
        if(query.next()) templ99=query.value(0).toByteArray();
        if(query.next()) templ100=query.value(0).toByteArray();
        if(query.next()) templ101=query.value(0).toByteArray();
        if(query.next()) templ102=query.value(0).toByteArray();
        if(query.next()) templ103=query.value(0).toByteArray();
        if(query.next()) templ104=query.value(0).toByteArray();
        if(query.next()) templ105=query.value(0).toByteArray();
        if(query.next()) templ106=query.value(0).toByteArray();
        if(query.next()) templ107=query.value(0).toByteArray();
    }

    if(templ36==a || templ99==b) ui->Zapis37->hide();
    if(templ37==a || templ100==b) ui->Zapis38->hide();
    if(templ38==a || templ101==b) ui->Zapis39->hide();
    if(templ39==a || templ102==b) ui->Zapis40->hide();
    if(templ40==a || templ103==b) ui->Zapis41->hide();
    if(templ41==a || templ104==b) ui->Zapis42->hide();
    if(templ42==a || templ105==b) ui->Zapis43->hide();
    if(templ43==a || templ106==b) ui->Zapis44->hide();
    if(templ44==a || templ107==b) ui->Zapis45->hide();

    if(query.exec("select Sat from Vrach_Free_Time"))
    {
        if(query.next()) templ45=query.value(0).toByteArray();
        if(query.next()) templ46=query.value(0).toByteArray();
        if(query.next()) templ47=query.value(0).toByteArray();
        if(query.next()) templ48=query.value(0).toByteArray();
        if(query.next()) templ49=query.value(0).toByteArray();
        if(query.next()) templ50=query.value(0).toByteArray();
        if(query.next()) templ51=query.value(0).toByteArray();
        if(query.next()) templ52=query.value(0).toByteArray();
        if(query.next()) templ53=query.value(0).toByteArray();
    }

    if(query.exec("select Sat from Client_Choice_Sat"))
    {
        if(query.next()) templ108=query.value(0).toByteArray();
        if(query.next()) templ109=query.value(0).toByteArray();
        if(query.next()) templ110=query.value(0).toByteArray();
        if(query.next()) templ111=query.value(0).toByteArray();
        if(query.next()) templ112=query.value(0).toByteArray();
        if(query.next()) templ113=query.value(0).toByteArray();
        if(query.next()) templ114=query.value(0).toByteArray();
        if(query.next()) templ115=query.value(0).toByteArray();
        if(query.next()) templ116=query.value(0).toByteArray();
    }

    if(templ45==a || templ108==b) ui->Zapis46->hide();
    if(templ46==a || templ109==b) ui->Zapis47->hide();
    if(templ47==a || templ110==b) ui->Zapis48->hide();
    if(templ48==a || templ111==b) ui->Zapis49->hide();
    if(templ49==a || templ112==b) ui->Zapis50->hide();
    if(templ50==a || templ113==b) ui->Zapis51->hide();
    if(templ51==a || templ114==b) ui->Zapis52->hide();
    if(templ52==a || templ115==b) ui->Zapis53->hide();
    if(templ53==a || templ116==b) ui->Zapis54->hide();

    if(query.exec("select Sun from Vrach_Free_Time"))
    {
        if(query.next()) templ54=query.value(0).toByteArray();
        if(query.next()) templ55=query.value(0).toByteArray();
        if(query.next()) templ56=query.value(0).toByteArray();
        if(query.next()) templ57=query.value(0).toByteArray();
        if(query.next()) templ58=query.value(0).toByteArray();
        if(query.next()) templ59=query.value(0).toByteArray();
        if(query.next()) templ60=query.value(0).toByteArray();
        if(query.next()) templ61=query.value(0).toByteArray();
        if(query.next()) templ62=query.value(0).toByteArray();
    }

    if(query.exec("select Sun from Client_Choice_Sun"))
    {
        if(query.next()) templ117=query.value(0).toByteArray();
        if(query.next()) templ118=query.value(0).toByteArray();
        if(query.next()) templ119=query.value(0).toByteArray();
        if(query.next()) templ120=query.value(0).toByteArray();
        if(query.next()) templ121=query.value(0).toByteArray();
        if(query.next()) templ122=query.value(0).toByteArray();
        if(query.next()) templ123=query.value(0).toByteArray();
        if(query.next()) templ124=query.value(0).toByteArray();
        if(query.next()) templ125=query.value(0).toByteArray();
    }

    if(templ54==a || templ117==b) ui->Zapis55->hide();
    if(templ55==a || templ118==b) ui->Zapis56->hide();
    if(templ56==a || templ119==b) ui->Zapis57->hide();
    if(templ57==a || templ120==b) ui->Zapis58->hide();
    if(templ58==a || templ121==b) ui->Zapis59->hide();
    if(templ59==a || templ122==b) ui->Zapis60->hide();
    if(templ60==a || templ123==b) ui->Zapis61->hide();
    if(templ61==a || templ124==b) ui->Zapis62->hide();
    if(templ62==a || templ125==b) ui->Zapis63->hide();

}

void ClientChoose::on_Zapis_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Mon SET FIO =""'"+FIO+"'"" WHERE ID = 1");
        query.exec("UPDATE Client_Choice_Mon SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 1");
        query.exec("UPDATE Client_Choice_Mon SET Mon = 1 WHERE ID = 1");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis1_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Mon SET FIO =""'"+FIO+"'"" WHERE ID = 2");
        query.exec("UPDATE Client_Choice_Mon SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 2");
        query.exec("UPDATE Client_Choice_Mon SET Mon = 1 WHERE ID = 2");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis2_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Mon SET FIO =""'"+FIO+"'"" WHERE ID = 3");
        query.exec("UPDATE Client_Choice_Mon SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 3");
        query.exec("UPDATE Client_Choice_Mon SET Mon = 1 WHERE ID = 3");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis3_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Mon SET FIO =""'"+FIO+"'"" WHERE ID = 4");
        query.exec("UPDATE Client_Choice_Mon SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 4");
        query.exec("UPDATE Client_Choice_Mon SET Mon = 1 WHERE ID = 4");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis4_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Mon SET FIO =""'"+FIO+"'"" WHERE ID = 5");
        query.exec("UPDATE Client_Choice_Mon SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 5");
        query.exec("UPDATE Client_Choice_Mon SET Mon = 1 WHERE ID = 5");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis5_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Mon SET FIO =""'"+FIO+"'"" WHERE ID = 6");
        query.exec("UPDATE Client_Choice_Mon SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 6");
        query.exec("UPDATE Client_Choice_Mon SET Mon = 1 WHERE ID = 6");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis6_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Mon SET FIO =""'"+FIO+"'"" WHERE ID = 7");
        query.exec("UPDATE Client_Choice_Mon SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 7");
        query.exec("UPDATE Client_Choice_Mon SET Mon = 1 WHERE ID = 7");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}


void ClientChoose::on_Zapis7_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Mon SET FIO =""'"+FIO+"'"" WHERE ID = 8");
        query.exec("UPDATE Client_Choice_Mon SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 8");
        query.exec("UPDATE Client_Choice_Mon SET Mon = 1 WHERE ID = 8");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis8_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Mon SET FIO =""'"+FIO+"'"" WHERE ID = 9");
        query.exec("UPDATE Client_Choice_Mon SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 9");
        query.exec("UPDATE Client_Choice_Mon SET Mon = 1 WHERE ID = 9");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis10_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Tue SET FIO =""'"+FIO+"'"" WHERE ID = 1");
        query.exec("UPDATE Client_Choice_Tue SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 1");
        query.exec("UPDATE Client_Choice_Tue SET Tue = 1 WHERE ID = 1");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis11_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Tue SET FIO =""'"+FIO+"'"" WHERE ID = 2");
        query.exec("UPDATE Client_Choice_Tue SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 2");
        query.exec("UPDATE Client_Choice_Tue SET Tue = 1 WHERE ID = 2");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis12_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Tue SET FIO =""'"+FIO+"'"" WHERE ID = 3");
        query.exec("UPDATE Client_Choice_Tue SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 3");
        query.exec("UPDATE Client_Choice_Tue SET Tue = 1 WHERE ID = 3");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis13_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Tue SET FIO =""'"+FIO+"'"" WHERE ID = 4");
        query.exec("UPDATE Client_Choice_Tue SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 4");
        query.exec("UPDATE Client_Choice_Tue SET Tue = 1 WHERE ID = 4");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis14_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Tue SET FIO =""'"+FIO+"'"" WHERE ID = 5");
        query.exec("UPDATE Client_Choice_Tue SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 5");
        query.exec("UPDATE Client_Choice_Tue SET Tue = 1 WHERE ID = 5");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis15_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Tue SET FIO =""'"+FIO+"'"" WHERE ID = 6");
        query.exec("UPDATE Client_Choice_Tue SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 6");
        query.exec("UPDATE Client_Choice_Tue SET Tue = 1 WHERE ID = 6");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis16_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Tue SET FIO =""'"+FIO+"'"" WHERE ID = 7");
        query.exec("UPDATE Client_Choice_Tue SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 7");
        query.exec("UPDATE Client_Choice_Tue SET Tue = 1 WHERE ID = 7");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis17_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Tue SET FIO =""'"+FIO+"'"" WHERE ID = 8");
        query.exec("UPDATE Client_Choice_Tue SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 8");
        query.exec("UPDATE Client_Choice_Tue SET Tue = 1 WHERE ID = 8");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis18_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Tue SET FIO =""'"+FIO+"'"" WHERE ID = 9");
        query.exec("UPDATE Client_Choice_Tue SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 9");
        query.exec("UPDATE Client_Choice_Tue SET Tue = 1 WHERE ID = 9");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis19_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Wed SET FIO =""'"+FIO+"'"" WHERE ID = 1");
        query.exec("UPDATE Client_Choice_Wed SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 1");
        query.exec("UPDATE Client_Choice_Wed SET Wed = 1 WHERE ID = 1");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis20_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Wed SET FIO =""'"+FIO+"'"" WHERE ID = 2");
        query.exec("UPDATE Client_Choice_Wed SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 2");
        query.exec("UPDATE Client_Choice_Wed SET Wed = 1 WHERE ID = 2");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis21_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Wed SET FIO =""'"+FIO+"'"" WHERE ID = 3");
        query.exec("UPDATE Client_Choice_Wed SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 3");
        query.exec("UPDATE Client_Choice_Wed SET Wed = 1 WHERE ID = 3");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis22_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Wed SET FIO =""'"+FIO+"'"" WHERE ID = 4");
        query.exec("UPDATE Client_Choice_Wed SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 4");
        query.exec("UPDATE Client_Choice_Wed SET Wed = 1 WHERE ID = 4");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis23_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Wed SET FIO =""'"+FIO+"'"" WHERE ID = 5");
        query.exec("UPDATE Client_Choice_Wed SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 5");
        query.exec("UPDATE Client_Choice_Wed SET Wed = 1 WHERE ID = 5");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis24_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Wed SET FIO =""'"+FIO+"'"" WHERE ID = 6");
        query.exec("UPDATE Client_Choice_Wed SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 6");
        query.exec("UPDATE Client_Choice_Wed SET Wed = 1 WHERE ID = 6");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis25_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Wed SET FIO =""'"+FIO+"'"" WHERE ID = 7");
        query.exec("UPDATE Client_Choice_Wed SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 7");
        query.exec("UPDATE Client_Choice_Wed SET Wed = 1 WHERE ID = 7");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis26_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Wed SET FIO =""'"+FIO+"'"" WHERE ID = 8");
        query.exec("UPDATE Client_Choice_Wed SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 8");
        query.exec("UPDATE Client_Choice_Wed SET Wed = 1 WHERE ID = 8");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis27_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Wed SET FIO =""'"+FIO+"'"" WHERE ID = 9");
        query.exec("UPDATE Client_Choice_Wed SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 9");
        query.exec("UPDATE Client_Choice_Wed SET Wed = 1 WHERE ID = 9");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis28_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Thu SET FIO =""'"+FIO+"'"" WHERE ID = 1");
        query.exec("UPDATE Client_Choice_Thu SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 1");
        query.exec("UPDATE Client_Choice_Thu SET Wed = 1 WHERE ID = 1");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis29_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Thu SET FIO =""'"+FIO+"'"" WHERE ID = 2");
        query.exec("UPDATE Client_Choice_Thu SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 2");
        query.exec("UPDATE Client_Choice_Thu SET Thu = 1 WHERE ID = 2");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis30_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Thu SET FIO =""'"+FIO+"'"" WHERE ID = 3");
        query.exec("UPDATE Client_Choice_Thu SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 3");
        query.exec("UPDATE Client_Choice_Thu SET Thu = 1 WHERE ID = 3");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis31_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Thu SET FIO =""'"+FIO+"'"" WHERE ID = 4");
        query.exec("UPDATE Client_Choice_Thu SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 4");
        query.exec("UPDATE Client_Choice_Thu SET Thu = 1 WHERE ID = 4");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis32_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Thu SET FIO =""'"+FIO+"'"" WHERE ID = 5");
        query.exec("UPDATE Client_Choice_Thu SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 5");
        query.exec("UPDATE Client_Choice_Thu SET Thu = 1 WHERE ID = 5");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis33_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Thu SET FIO =""'"+FIO+"'"" WHERE ID = 6");
        query.exec("UPDATE Client_Choice_Thu SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 6");
        query.exec("UPDATE Client_Choice_Thu SET Thu = 1 WHERE ID = 6");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis34_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Thu SET FIO =""'"+FIO+"'"" WHERE ID = 7");
        query.exec("UPDATE Client_Choice_Thu SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 7");
        query.exec("UPDATE Client_Choice_Thu SET Thu = 1 WHERE ID = 7");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis35_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Thu SET FIO =""'"+FIO+"'"" WHERE ID = 8");
        query.exec("UPDATE Client_Choice_Thu SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 8");
        query.exec("UPDATE Client_Choice_Thu SET Thu = 1 WHERE ID = 8");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis36_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Thu SET FIO =""'"+FIO+"'"" WHERE ID = 9");
        query.exec("UPDATE Client_Choice_Thu SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 9");
        query.exec("UPDATE Client_Choice_Thu SET Thu = 1 WHERE ID = 9");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis37_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Fri SET FIO =""'"+FIO+"'"" WHERE ID = 1");
        query.exec("UPDATE Client_Choice_Fri SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 1");
        query.exec("UPDATE Client_Choice_Fri SET Fri = 1 WHERE ID = 1");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis38_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Fri SET FIO =""'"+FIO+"'"" WHERE ID = 2");
        query.exec("UPDATE Client_Choice_Fri SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 2");
        query.exec("UPDATE Client_Choice_Fri SET Fri = 1 WHERE ID = 2");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis39_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Fri SET FIO =""'"+FIO+"'"" WHERE ID = 3");
        query.exec("UPDATE Client_Choice_Fri SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 3");
        query.exec("UPDATE Client_Choice_Fri SET Fri = 1 WHERE ID = 3");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis40_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Fri SET FIO =""'"+FIO+"'"" WHERE ID = 4");
        query.exec("UPDATE Client_Choice_Fri SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 4");
        query.exec("UPDATE Client_Choice_Fri SET Fri = 1 WHERE ID = 4");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis41_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Fri SET FIO =""'"+FIO+"'"" WHERE ID = 5");
        query.exec("UPDATE Client_Choice_Fri SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 5");
        query.exec("UPDATE Client_Choice_Fri SET Fri = 1 WHERE ID = 5");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis42_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Fri SET FIO =""'"+FIO+"'"" WHERE ID = 6");
        query.exec("UPDATE Client_Choice_Fri SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 6");
        query.exec("UPDATE Client_Choice_Fri SET Fri = 1 WHERE ID = 6");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis43_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Fri SET FIO =""'"+FIO+"'"" WHERE ID = 7");
        query.exec("UPDATE Client_Choice_Fri SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 7");
        query.exec("UPDATE Client_Choice_Fri SET Fri = 1 WHERE ID = 7");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis44_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Fri SET FIO =""'"+FIO+"'"" WHERE ID = 8");
        query.exec("UPDATE Client_Choice_Fri SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 8");
        query.exec("UPDATE Client_Choice_Fri SET Fri = 1 WHERE ID = 8");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis45_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Fri SET FIO =""'"+FIO+"'"" WHERE ID = 9");
        query.exec("UPDATE Client_Choice_Fri SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 9");
        query.exec("UPDATE Client_Choice_Fri SET Fri = 1 WHERE ID = 9");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis46_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Sat SET FIO =""'"+FIO+"'"" WHERE ID = 1");
        query.exec("UPDATE Client_Choice_Sat SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 1");
        query.exec("UPDATE Client_Choice_Sat SET Sat = 1 WHERE ID = 1");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis47_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Sat SET FIO =""'"+FIO+"'"" WHERE ID = 2");
        query.exec("UPDATE Client_Choice_Sat SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 2");
        query.exec("UPDATE Client_Choice_Sat SET Sat = 1 WHERE ID = 2");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis48_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Sat SET FIO =""'"+FIO+"'"" WHERE ID = 3");
        query.exec("UPDATE Client_Choice_Sat SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 3");
        query.exec("UPDATE Client_Choice_Sat SET Sat = 1 WHERE ID = 3");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis49_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Sat SET FIO =""'"+FIO+"'"" WHERE ID = 4");
        query.exec("UPDATE Client_Choice_Sat SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 4");
        query.exec("UPDATE Client_Choice_Sat SET Sat = 1 WHERE ID = 4");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis50_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Sat SET FIO =""'"+FIO+"'"" WHERE ID = 5");
        query.exec("UPDATE Client_Choice_Sat SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 5");
        query.exec("UPDATE Client_Choice_Sat SET Sat = 1 WHERE ID = 5");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis51_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Sat SET FIO =""'"+FIO+"'"" WHERE ID = 6");
        query.exec("UPDATE Client_Choice_Sat SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 6");
        query.exec("UPDATE Client_Choice_Sat SET Sat = 1 WHERE ID = 6");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis52_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Sat SET FIO =""'"+FIO+"'"" WHERE ID = 7");
        query.exec("UPDATE Client_Choice_Sat SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 7");
        query.exec("UPDATE Client_Choice_Sat SET Sat = 1 WHERE ID = 7");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis53_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Sat SET FIO =""'"+FIO+"'"" WHERE ID = 8");
        query.exec("UPDATE Client_Choice_Sat SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 8");
        query.exec("UPDATE Client_Choice_Sat SET Sat = 1 WHERE ID = 8");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis54_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Sat SET FIO =""'"+FIO+"'"" WHERE ID = 9");
        query.exec("UPDATE Client_Choice_Sat SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 9");
        query.exec("UPDATE Client_Choice_Sat SET Sat = 1 WHERE ID = 9");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis55_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Sun SET FIO =""'"+FIO+"'"" WHERE ID = 1");
        query.exec("UPDATE Client_Choice_Sun SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 1");
        query.exec("UPDATE Client_Choice_Sun SET Sun = 1 WHERE ID = 1");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis56_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Sun SET FIO =""'"+FIO+"'"" WHERE ID = 2");
        query.exec("UPDATE Client_Choice_Sun SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 2");
        query.exec("UPDATE Client_Choice_Sun SET Sun = 1 WHERE ID = 2");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis57_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Sun SET FIO =""'"+FIO+"'"" WHERE ID = 3");
        query.exec("UPDATE Client_Choice_Sun SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 3");
        query.exec("UPDATE Client_Choice_Sun SET Sun = 1 WHERE ID = 3");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis58_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Sun SET FIO =""'"+FIO+"'"" WHERE ID = 4");
        query.exec("UPDATE Client_Choice_Sun SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 4");
        query.exec("UPDATE Client_Choice_Sun SET Sun = 1 WHERE ID = 4");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis59_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Sun SET FIO =""'"+FIO+"'"" WHERE ID = 5");
        query.exec("UPDATE Client_Choice_Sun SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 5");
        query.exec("UPDATE Client_Choice_Sun SET Sun = 1 WHERE ID = 5");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis60_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Sun SET FIO =""'"+FIO+"'"" WHERE ID = 6");
        query.exec("UPDATE Client_Choice_Sun SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 6");
        query.exec("UPDATE Client_Choice_Sun SET Sun = 1 WHERE ID = 6");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis61_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Sun SET FIO =""'"+FIO+"'"" WHERE ID = 7");
        query.exec("UPDATE Client_Choice_Sun SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 7");
        query.exec("UPDATE Client_Choice_Sun SET Sun = 1 WHERE ID = 7");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis62_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Sun SET FIO =""'"+FIO+"'"" WHERE ID = 8");
        query.exec("UPDATE Client_Choice_Sun SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 8");
        query.exec("UPDATE Client_Choice_Sun SET Sun = 1 WHERE ID = 8");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}

void ClientChoose::on_Zapis63_clicked()
{
    QString dbPath = "../CourseWork/database.db";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);
    dataBase.open();
    QSqlQuery query(dataBase);

    QString FIO = ui->FIO->text();
    QString Phone_Number = ui->Phone_Number->text();


    if(FIO != "" && Phone_Number != "")
    {
        query.exec("UPDATE Client_Choice_Sun SET FIO =""'"+FIO+"'"" WHERE ID = 9");
        query.exec("UPDATE Client_Choice_Sun SET Phone_Number =""'"+Phone_Number+"'"" WHERE ID = 9");
        query.exec("UPDATE Client_Choice_Sun SET Sun = 1 WHERE ID = 9");
        hide();
    }
    else
    {
        QMessageBox::information(this, "Ошибка", "Вы не ввели контактные данные");
    }
}
