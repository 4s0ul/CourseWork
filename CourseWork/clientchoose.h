/*!
 *\file
 * \brief this file describes clientchoose class
 */

#ifndef CLIENTCHOOSE_H
#define CLIENTCHOOSE_H

#include <QDialog>
#include <QtGui>
#include <QDebug>
#include <QtSql/QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

namespace Ui {
class ClientChoose;
}

/*!
 * \brief Класс ClientChoose был создан для записи ко Врачу
 */

class ClientChoose : public QDialog
{
    Q_OBJECT

public:
    explicit ClientChoose(QWidget *parent = nullptr);
    ~ClientChoose();

public slots:

    /*!
     * \brief on_Possible_Time_cellActivated
     *  Осуществляется подключение к базе данных database.db
     *   Происходит запрос на SELECT столбцов Mon, Tue, Wed, Thu, Fri, Sat, Sun из таблицы Vrach_Free_Time
     *    Инициилизурую байтовые массивы (templ - templ125) в которые загоняю строки из выше перечисленных столбцов
     *     Происходит запрос на SELECT столбцов Mon, Tue, Wed, Thu, Fri, Sat, Sun из таблиц Client_Choice_Mon, Client_Choice_Tue, Client_Choice_Wed, Client_Choice_Fri, Client_Choice_Sat, Client_Choice_Sun
     *       В байтовые массивы загоняю строки из выше перечисленных столбцов
     *          После этого происходит проверка занчений, если templ равен 0 (что значит, что врач в это время не работает) или templ63 равен 1 (что значит, что на это время уже записался человек), то кнопка скрывается
     */


    void on_Possible_Time_cellActivated();

    /*!
     * \brief on_Zapis_clicked - слот для кнопки, когда та нажата.
     *  При нажатии, осуществляется подключение к базе данных database.db
     *   Вкладываю в строковую переменную FIO занчение из lineEdit (FIO)
     *    Вкладываю в строковую переменную Phone_Number значение из lineEdit (Phone_Number)
     *     Если данные занчения не равны нулю, то происходит запрос на UPDATE столбцов Mon, FIO, Phone_Number в таблице Client_Choice_Mon где ID = 1
     *      Если данные значения равны нулю, то будет вызвано окно information предупреждающее, что вы не ввели свои данные
     *       Методы on_Zapis_clicked - on_Zapis63_clicked по своей работе идентичны, каждые 9 методов относятся к таблицам Client_Choice_Mon, Client_Choice_Tue, Client_Choice_Wed, Client_Choice_Fri, Client_Choice_Sat, Client_Choice_Sun соответственно, где перебираются ID (от 1 до 9)
     */

    void on_Zapis_clicked();

    void on_Zapis1_clicked();

    void on_Zapis2_clicked();

    void on_Zapis3_clicked();

    void on_Zapis4_clicked();

    void on_Zapis5_clicked();

    void on_Zapis6_clicked();

    void on_Zapis7_clicked();

    void on_Zapis8_clicked();

    void on_Zapis10_clicked();

    void on_Zapis11_clicked();

    void on_Zapis12_clicked();

    void on_Zapis13_clicked();

    void on_Zapis14_clicked();

    void on_Zapis15_clicked();

    void on_Zapis16_clicked();

    void on_Zapis17_clicked();

    void on_Zapis18_clicked();

    void on_Zapis19_clicked();

    void on_Zapis20_clicked();

    void on_Zapis21_clicked();

    void on_Zapis22_clicked();

    void on_Zapis23_clicked();

    void on_Zapis24_clicked();

    void on_Zapis25_clicked();

    void on_Zapis26_clicked();

    void on_Zapis27_clicked();

    void on_Zapis28_clicked();

    void on_Zapis29_clicked();

    void on_Zapis30_clicked();

    void on_Zapis31_clicked();

    void on_Zapis32_clicked();

    void on_Zapis33_clicked();

    void on_Zapis34_clicked();

    void on_Zapis35_clicked();

    void on_Zapis36_clicked();

    void on_Zapis37_clicked();

    void on_Zapis38_clicked();

    void on_Zapis39_clicked();

    void on_Zapis40_clicked();

    void on_Zapis41_clicked();

    void on_Zapis42_clicked();

    void on_Zapis43_clicked();

    void on_Zapis44_clicked();

    void on_Zapis45_clicked();

    void on_Zapis46_clicked();

    void on_Zapis47_clicked();

    void on_Zapis48_clicked();

    void on_Zapis49_clicked();

    void on_Zapis50_clicked();

    void on_Zapis51_clicked();

    void on_Zapis52_clicked();

    void on_Zapis53_clicked();

    void on_Zapis54_clicked();

    void on_Zapis55_clicked();

    void on_Zapis56_clicked();

    void on_Zapis57_clicked();

    void on_Zapis58_clicked();

    void on_Zapis59_clicked();

    void on_Zapis60_clicked();

    void on_Zapis61_clicked();

    void on_Zapis62_clicked();

    void on_Zapis63_clicked();

public:

    /*!
     * \brief readDbAndDisplayTable заполнение tableWidget (ClientChoose)
     *  Осуществляется подключение к базе данных database.db
     *   Происходит запрос на select данных из таблицы Vrach_Free_Time
     *    Задается кол-во столбцов (8) и их названия
     *     Строки из таблицы Vrach_Free_Time заполняются в tableWidget (ClientChoose), кроме строк из столбца ID, поскольку значение value я беру начиная с 1, а не с 0
     */

    Ui::ClientChoose *ui;
    void readDbAndDisplayTable();
};

#endif // CLIENTCHOOSE_H
