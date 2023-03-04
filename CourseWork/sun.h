/*!
 *\file
 * \brief this file describes sun class
 */

#ifndef SUN_H
#define SUN_H

#include <QDialog>
#include <QtGui>
#include <QDebug>
#include <QtSql/QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

namespace Ui {
class sun;
}

/*!
 * \brief Класс sun был создан для изменения графика приема Врача
 */

class sun : public QDialog
{
    Q_OBJECT

public:
    explicit sun(QWidget *parent = nullptr);
    ~sun();

public slots:

    /*!
     * \brief on_sunOK_clicked - слот для кнопки, когда та нажата.
     *  При нажатии, осуществляется подключение к базе данных (database.db) и создается запрос
     *   Происходит проверка стоит ли галочка checkbox'ах (sun9-sun17)
     *    Если галочка стоит, например в sun9, то происходит запрос на UPDATE столбца Sun в таблице Vrach_Fee_Time с ID=1 и т.д. до sun17, где в ID=9
     */

    void on_sunOK_clicked();

public:
    Ui::sun *ui;
};

#endif // SUN_H
