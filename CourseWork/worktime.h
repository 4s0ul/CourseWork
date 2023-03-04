/*!
 * \file
 * \brief this file describes worktime class
 */


#ifndef WORKTIME_H
#define WORKTIME_H

#include <QDialog>
#include <QtGui>
#include <QDebug>
#include <QtSql/QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

namespace Ui {
class worktime;
}

/*!
 * \brief Класс worktime создан для составления расписания врача и просмотра врачом, записавшихся к нему, пациентов
 *  класс унаследован от secondwindow
 */

class worktime : public QDialog
{
    Q_OBJECT

public:
    explicit worktime(QWidget *parent = nullptr);
    ~worktime();

public slots:

    /*!
     * \brief on_mon_clicked - слот для кнопки, когда та нажата.
     *  При нажатии, осуществляется переход на новое окно (mon)
     */


    void on_mon_clicked();

    /*!
     * \brief on_tue_clicked - слот для кнопки, когда та нажата.
     *  При нажатии, осуществляется переход на новое окно (tue)
     */

    void on_tue_clicked();

    /*!
     * \brief on_wed_clicked - слот для кнопки, когда та нажата.
     *  При нажатии, осуществляется переход на новое окно (wed)
     */

    void on_wed_clicked();

    /*!
     * \brief on_thu_clicked - слот для кнопки, когда та нажата.
     *  При нажатии, осуществляется переход на новое окно (thu)
     */

    void on_thu_clicked();

    /*!
     * \brief on_fri_clicked - слот для кнопки, когда та нажата.
     *  При нажатии, осуществляется переход на новое окно (fri)
     */

    void on_fri_clicked();

    /*!
     * \brief on_sat_clicked - слот для кнопки, когда та нажата.
     *  При нажатии, осуществляется переход на новое окно (sat)
     */

    void on_sat_clicked();

    /*!
     * \brief on_sun_clicked - слот для кнопки, когда та нажата.
     *  При нажатии, осуществляется переход на новое окно (sun)
     */

    void on_sun_clicked();

    /*!
     * \brief on_pushButton_clicked - слот для кнопки, когда та нажата.
     *  При нажатии, осуществляется подключение к базе данных database.db
     *   Происходит UPDATE таблицы Vrach_Free_Time, в которой изменяется значение столбцов Mon, Tue, Wed, Thu, Fri, Sat, Sun на 0 со строки где ID=1 по строку где ID = 9
     */

    void on_pushButton_clicked();

    /*!
     * \brief on_ClearPatients_clicked - слот для кнопки, когда та нажата.
     *  При нажатии, осуществляется подключение к базе данных database.db
     *   Происходит запрос на UPDATE таблиц Client_Choice_Mon, Client_Choice_Tue, Client_Choice_Wed, Client_Choice_Fri, Client_Choice_Sat, Client_Choice_Sun
     *    В данных таблицах изменяется значение столбцов FIO, Phone_Number, Mon, Tue, Wed, Thu, Fri, Sat, Sun на 0 со строки где ID=1 по строку где ID = 9
     */

    void on_ClearPatients_clicked();

public:

    /*!
     * \brief readDbAndDisplayTable заполнение tableWidget (Vrach_Free_Time) и tableWidget(Client_Choice)
     *  Осуществляется подключение к базе данных database.db
     *   Происходит запрос на select данных из таблицы Vrach_Free_Time
     *    Задается кол-во столбцов (8) и их названия
     *     Строки из таблицы Vrach_Free_Time заполняются в tableWidget (Vrach_Free_Time), кроме строк из столбца ID, поскольку значение value я беру начиная с 1, а не с 0
     *      Происходит запрос на select данных из таблиц Client_Choice_Mon, Client_Choice_Tue, Client_Choice_Wed, Client_Choice_Fri, Client_Choice_Sat, Client_Choice_Sun
     *       берутся все столбцы, кроме столбцов с именем ID
     *        Задается кол-во столбцов (21) и их названия
     *         Строки из данных таблицы заполняются в tableWidget (Client_Choice)
     */

    Ui::worktime *ui;
    void readDbAndDisplayTable();
};

#endif // WORKTIME_H
