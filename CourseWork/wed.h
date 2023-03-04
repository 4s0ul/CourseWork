/*!
 *\file
 * \brief this file describes wed class
 */

#ifndef WED_H
#define WED_H

#include <QDialog>
#include <QtGui>
#include <QDebug>
#include <QtSql/QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

namespace Ui {
class Wed;
}

/*!
 * \brief Класс tue был создан для изменения графика приема Врача
 */

class Wed : public QDialog
{
    Q_OBJECT

public:
    explicit Wed(QWidget *parent = nullptr);
    ~Wed();

public slots:

    /*!
     * \brief on_wedOK_clicked - слот для кнопки, когда та нажата.
     *  При нажатии, осуществляется подключение к базе данных (database.db) и создается запрос
     *   Происходит проверка стоит ли галочка checkbox'ах (wed9-wed17)
     *    Если галочка стоит, например в wed9, то происходит запрос на UPDATE столбца Wed в таблице Vrach_Fee_Time с ID=1 и т.д. до wed17, где в ID=9
     */

    void on_wedOK_clicked();

public:

    Ui::Wed *ui;
};

#endif // WED_H
