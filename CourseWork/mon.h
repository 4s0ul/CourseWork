/*!
 *\file
 * \brief this file describes mon class
 */

#ifndef MON_H
#define MON_H

#include <QDialog>
#include <QtGui>
#include <QDebug>
#include <QtSql/QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

namespace Ui {
class mon;
}

/*!
 * \brief Класс mon был создан для изменения графика приема Врача
 */

class mon : public QDialog
{
    Q_OBJECT

public:
    explicit mon(QWidget *parent = nullptr);
    ~mon();

public slots:

    /*!
     * \brief on_monOK_clicked - слот для кнопки, когда та нажата.
     *  При нажатии, осуществляется подключение к базе данных (database.db) и создается запрос
     *   Происходит проверка стоит ли галочка checkbox'ах (mon9-mon17)
     *    Если галочка стоит, например в mon9, то происходит запрос на UPDATE столбца Mon в таблице Vrach_Fee_Time с ID=1 и т.д. до mon17, где в ID=9
     */

    void on_monOK_clicked();

public:
    Ui::mon *ui;
};

#endif // MON_H
