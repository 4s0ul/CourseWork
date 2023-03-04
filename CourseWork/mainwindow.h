/*!
 *\file
 * \brief this file describes mainwindow class
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "secondwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

    /*!
     * \brief класс mainwindow создан для выбора пользователем, кем он является
     */

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:

    /*!
     * \brief on_DoctorButton_clicked - слот для кнопки, когда та нажата.
     * При нажатии, осуществляется переход на новое окно (secondwindow)
     * Скрывает текущее окно
     */

    void on_DoctorButton_clicked();

    /*!
     * \brief on_ClientButton_clicked - слот для кнопки, когда та нажата.
     * При нажатии, осуществляется переход на новое окно (clientchoose)
     * Скрывает текущее окно
     */

    void on_ClientButton_clicked();

public:
    Ui::MainWindow *ui;
    SecondWindow *window;
};
#endif // MAINWINDOW_H
