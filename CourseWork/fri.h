/*!
 *\file
 * \brief this file describes fri class
 */

#ifndef FRI_H
#define FRI_H

#include <QDialog>
#include <QtGui>
#include <QDebug>
#include <QtSql/QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

namespace Ui {
class fri;
}

/*!
 * \brief Класс fri был создан для изменения графика приема Врача
 */

class fri : public QDialog
{
    Q_OBJECT

public:

    explicit fri(QWidget *parent = nullptr);
    ~fri();

public slots:

    /*!
     * \brief on_friOK_clicked - слот для кнопки, когда та нажата.
     *  При нажатии, осуществляется подключение к базе данных (database.db) и создается запрос
     *   Происходит проверка стоит ли галочка checkbox'ах (fri9-fri17)
     *    Если галочка стоит, например в fri9, то происходит запрос на UPDATE столбца Fri в таблице Vrach_Fee_Time с ID=1 и т.д. до fri17, где в ID=9
     */

    void on_friOK_clicked();

public:
    Ui::fri *ui;
};

#endif // FRI_H
