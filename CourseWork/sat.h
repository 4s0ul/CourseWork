/*!
 *\file
 * \brief this file describes sat class
 */

#ifndef SAT_H
#define SAT_H

#include <QDialog>
#include <QtGui>
#include <QDebug>
#include <QtSql/QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

namespace Ui {
class sat;
}

/*!
 * \brief Класс sat был создан для изменения графика приема Врача
 */

class sat : public QDialog
{
    Q_OBJECT

public:
    explicit sat(QWidget *parent = nullptr);
    ~sat();

public slots:

    /*!
     * \brief on_satOK_clicked - слот для кнопки, когда та нажата.
     *  При нажатии, осуществляется подключение к базе данных (database.db) и создается запрос
     *   Происходит проверка стоит ли галочка checkbox'ах (sat9-sat17)
     *    Если галочка стоит, например в sat9, то происходит запрос на UPDATE столбца Sat в таблице Vrach_Fee_Time с ID=1 и т.д. до sat17, где в ID=9
     */

    void on_satOK_clicked();

public:
    Ui::sat *ui;
};

#endif // SAT_H
