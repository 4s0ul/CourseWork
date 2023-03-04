/*!
 *\file
 * \brief this file describes secondwindow class
 */

#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QDialog>

namespace Ui {
class SecondWindow;
}

/*!
 * \brief Класс secondwindow создан для подтверждения пользователя, что он является врачом
 */

class SecondWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SecondWindow(QWidget *parent = nullptr);
    ~SecondWindow();

public slots:

    /*!
     * \brief on_Avtor_clicked - слот для кнопки, когда та нажата.
     * При нажатии, осуществляется проверка lineEdit'а (Login) на соответствие мною выбранного логина "Doc" и проверка lineEdit'а Password на соответствие мною придуманного паролая '123'
     * При введении верного логина и пароля осуществляется переход в worktime
     * При несоответсвии логина и пароля выведится Warning "Ошибка!", "Введен неверный логин или пароль!"
     * Скрывает текущее окно
     */

    void on_Avtor_clicked();

public:
    Ui::SecondWindow *ui;
};

#endif // SECONDWINDOW_H
