/*!
 *\file
 * \brief this file describes thu class
 */

#ifndef THU_H
#define THU_H

#include <QDialog>
#include <QtGui>
#include <QDebug>
#include <QtSql/QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

namespace Ui {
class Thu;
}

/*!
 * \brief Класс Thu был создан для изменения графика приема Врача
 */

class Thu : public QDialog
{
    Q_OBJECT

public:
    explicit Thu(QWidget *parent = nullptr);
    ~Thu();

public slots:

    /*!
     * \brief on_thuOK_clicked - слот для кнопки, когда та нажата.
     *  При нажатии, осуществляется подключение к базе данных (database.db) и создается запрос
     *   Происходит проверка стоит ли галочка checkbox'ах (thu9-thu17)
     *    Если галочка стоит, например в thu9, то происходит запрос на UPDATE столбца Thu в таблице Vrach_Fee_Time с ID=1 и т.д. до thu17, где в ID=9
     */

    void on_thuOK_clicked();

public:
    Ui::Thu *ui;
};

#endif // THU_H
