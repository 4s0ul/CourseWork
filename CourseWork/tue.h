/*!
 *\file
 * \brief this file describes tue class
 */

#ifndef TUE_H
#define TUE_H

#include <QDialog>
#include <QtGui>
#include <QDebug>
#include <QtSql/QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

namespace Ui {
class tue;
}

/*!
 * \brief Класс tue был создан для изменения графика приема Врача
 */

class tue : public QDialog
{
    Q_OBJECT

public:
    explicit tue(QWidget *parent = nullptr);
    ~tue();

public slots:

    /*!
     * \brief on_tueOK_clicked - слот для кнопки, когда та нажата.
     *  При нажатии, осуществляется подключение к базе данных (database.db) и создается запрос
     *   Происходит проверка стоит ли галочка checkbox'ах (tue9-tue17)
     *    Если галочка стоит, например в tue9, то происходит запрос на UPDATE столбца Tue в таблице Vrach_Fee_Time с ID=1 и т.д. до tue17, где в ID=9
     */

    void on_tueOK_clicked();

public:
    Ui::tue *ui;
};

#endif // TUE_H
