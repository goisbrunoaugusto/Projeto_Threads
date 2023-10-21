#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "trem.h"

namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void start();

public slots:
    void updateInterface(int,int,int);

private slots:
    //void on_pushButton_clicked();
    
    int slotNovaVelocidadeSlider1(int);

    void on_pushButton_2_clicked();

    void on_slider_velTrem1_valueChanged(int value);

    void on_slider_velTrem2_valueChanged(int value);

    void on_slider_velTrem3_valueChanged(int value);

    void on_slider_velTrem4_valueChanged(int value);

    void on_slider_velTrem5_valueChanged(int value);

signals:
    int signalNovaVelocidadeSlider1(int);

private:
    Ui::MainWindow *ui;

    //Cria os objetos TREM's
    Trem *trem1;
    Trem *trem2;
    Trem *trem3;
    Trem *trem4;
    Trem *trem5;
};

#endif // MAINWINDOW_H
