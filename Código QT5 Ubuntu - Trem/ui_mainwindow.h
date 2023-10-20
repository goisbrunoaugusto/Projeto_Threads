/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_trem1;
    QLabel *label_trilho1;
    QLabel *label_trilho3;
    QLabel *label_trilho4;
    QPushButton *pushButton_2;
    QLabel *label_trilho4_2;
    QLabel *label_trilho1_2;
    QLabel *label_trem2;
    QLabel *label_trilho4_3;
    QLabel *label_trilho3_2;
    QLabel *label_trilho2_3;
    QLabel *label_trilho4_4;
    QLabel *label_trilho3_3;
    QLabel *label_trilho2_4;
    QLabel *label_trilho1_5;
    QLabel *label_trilho4_5;
    QLabel *label_trilho3_4;
    QLabel *label_trilho2_5;
    QLabel *label_trem3;
    QLabel *label_trem4;
    QLabel *label_trem5;
    QSlider *slider_velTrem1;
    QSlider *slider_velTrem2;
    QSlider *slider_velTrem3;
    QSlider *slider_velTrem4;
    QSlider *slider_velTrem5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1168, 534);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_trem1 = new QLabel(centralWidget);
        label_trem1->setObjectName(QString::fromUtf8("label_trem1"));
        label_trem1->setGeometry(QRect(310, 30, 21, 17));
        label_trem1->setStyleSheet(QString::fromUtf8("QLabel { background: red}"));
        label_trilho1 = new QLabel(centralWidget);
        label_trilho1->setObjectName(QString::fromUtf8("label_trilho1"));
        label_trilho1->setGeometry(QRect(330, 30, 250, 17));
        label_trilho1->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho3 = new QLabel(centralWidget);
        label_trilho3->setObjectName(QString::fromUtf8("label_trilho3"));
        label_trilho3->setGeometry(QRect(580, 30, 21, 137));
        label_trilho3->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho4 = new QLabel(centralWidget);
        label_trilho4->setObjectName(QString::fromUtf8("label_trilho4"));
        label_trilho4->setGeometry(QRect(310, 30, 21, 137));
        label_trilho4->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 350, 98, 27));
        label_trilho4_2 = new QLabel(centralWidget);
        label_trilho4_2->setObjectName(QString::fromUtf8("label_trilho4_2"));
        label_trilho4_2->setGeometry(QRect(850, 30, 21, 137));
        label_trilho4_2->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho1_2 = new QLabel(centralWidget);
        label_trilho1_2->setObjectName(QString::fromUtf8("label_trilho1_2"));
        label_trilho1_2->setGeometry(QRect(600, 30, 250, 17));
        label_trilho1_2->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trem2 = new QLabel(centralWidget);
        label_trem2->setObjectName(QString::fromUtf8("label_trem2"));
        label_trem2->setGeometry(QRect(580, 30, 21, 17));
        label_trem2->setStyleSheet(QString::fromUtf8("QLabel { background: red}"));
        label_trilho4_3 = new QLabel(centralWidget);
        label_trilho4_3->setObjectName(QString::fromUtf8("label_trilho4_3"));
        label_trilho4_3->setGeometry(QRect(440, 150, 21, 137));
        label_trilho4_3->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho3_2 = new QLabel(centralWidget);
        label_trilho3_2->setObjectName(QString::fromUtf8("label_trilho3_2"));
        label_trilho3_2->setGeometry(QRect(710, 166, 21, 121));
        label_trilho3_2->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho2_3 = new QLabel(centralWidget);
        label_trilho2_3->setObjectName(QString::fromUtf8("label_trilho2_3"));
        label_trilho2_3->setGeometry(QRect(460, 270, 250, 17));
        label_trilho2_3->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho4_4 = new QLabel(centralWidget);
        label_trilho4_4->setObjectName(QString::fromUtf8("label_trilho4_4"));
        label_trilho4_4->setGeometry(QRect(170, 150, 21, 137));
        label_trilho4_4->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho3_3 = new QLabel(centralWidget);
        label_trilho3_3->setObjectName(QString::fromUtf8("label_trilho3_3"));
        label_trilho3_3->setGeometry(QRect(440, 166, 21, 121));
        label_trilho3_3->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho2_4 = new QLabel(centralWidget);
        label_trilho2_4->setObjectName(QString::fromUtf8("label_trilho2_4"));
        label_trilho2_4->setGeometry(QRect(190, 270, 250, 17));
        label_trilho2_4->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho1_5 = new QLabel(centralWidget);
        label_trilho1_5->setObjectName(QString::fromUtf8("label_trilho1_5"));
        label_trilho1_5->setGeometry(QRect(169, 150, 811, 16));
        label_trilho1_5->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho4_5 = new QLabel(centralWidget);
        label_trilho4_5->setObjectName(QString::fromUtf8("label_trilho4_5"));
        label_trilho4_5->setGeometry(QRect(710, 150, 21, 137));
        label_trilho4_5->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho3_4 = new QLabel(centralWidget);
        label_trilho3_4->setObjectName(QString::fromUtf8("label_trilho3_4"));
        label_trilho3_4->setGeometry(QRect(980, 150, 21, 137));
        label_trilho3_4->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho2_5 = new QLabel(centralWidget);
        label_trilho2_5->setObjectName(QString::fromUtf8("label_trilho2_5"));
        label_trilho2_5->setGeometry(QRect(730, 270, 250, 17));
        label_trilho2_5->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trem3 = new QLabel(centralWidget);
        label_trem3->setObjectName(QString::fromUtf8("label_trem3"));
        label_trem3->setGeometry(QRect(170, 150, 21, 17));
        label_trem3->setStyleSheet(QString::fromUtf8("QLabel { background: red}"));
        label_trem4 = new QLabel(centralWidget);
        label_trem4->setObjectName(QString::fromUtf8("label_trem4"));
        label_trem4->setGeometry(QRect(440, 150, 21, 17));
        label_trem4->setStyleSheet(QString::fromUtf8("QLabel { background: red}"));
        label_trem5 = new QLabel(centralWidget);
        label_trem5->setObjectName(QString::fromUtf8("label_trem5"));
        label_trem5->setGeometry(QRect(710, 150, 21, 17));
        label_trem5->setStyleSheet(QString::fromUtf8("QLabel { background: red}"));
        slider_velTrem1 = new QSlider(centralWidget);
        slider_velTrem1->setObjectName(QString::fromUtf8("slider_velTrem1"));
        slider_velTrem1->setGeometry(QRect(420, 320, 160, 16));
        slider_velTrem1->setMaximum(200);
        slider_velTrem1->setOrientation(Qt::Horizontal);
        slider_velTrem2 = new QSlider(centralWidget);
        slider_velTrem2->setObjectName(QString::fromUtf8("slider_velTrem2"));
        slider_velTrem2->setGeometry(QRect(420, 340, 160, 16));
        slider_velTrem2->setMaximum(200);
        slider_velTrem2->setOrientation(Qt::Horizontal);
        slider_velTrem3 = new QSlider(centralWidget);
        slider_velTrem3->setObjectName(QString::fromUtf8("slider_velTrem3"));
        slider_velTrem3->setGeometry(QRect(420, 360, 160, 16));
        slider_velTrem3->setMaximum(200);
        slider_velTrem3->setOrientation(Qt::Horizontal);
        slider_velTrem4 = new QSlider(centralWidget);
        slider_velTrem4->setObjectName(QString::fromUtf8("slider_velTrem4"));
        slider_velTrem4->setGeometry(QRect(420, 380, 160, 16));
        slider_velTrem4->setMaximum(200);
        slider_velTrem4->setOrientation(Qt::Horizontal);
        slider_velTrem5 = new QSlider(centralWidget);
        slider_velTrem5->setObjectName(QString::fromUtf8("slider_velTrem5"));
        slider_velTrem5->setGeometry(QRect(420, 400, 160, 16));
        slider_velTrem5->setMaximum(200);
        slider_velTrem5->setOrientation(Qt::Horizontal);
        MainWindow->setCentralWidget(centralWidget);
        label_trilho1_5->raise();
        label_trilho1->raise();
        label_trilho3->raise();
        label_trilho4->raise();
        pushButton_2->raise();
        label_trilho4_2->raise();
        label_trilho1_2->raise();
        label_trilho4_3->raise();
        label_trilho3_2->raise();
        label_trilho2_3->raise();
        label_trilho4_4->raise();
        label_trilho3_3->raise();
        label_trilho2_4->raise();
        label_trilho4_5->raise();
        label_trilho3_4->raise();
        label_trilho2_5->raise();
        slider_velTrem1->raise();
        slider_velTrem2->raise();
        slider_velTrem3->raise();
        slider_velTrem4->raise();
        slider_velTrem5->raise();
        label_trem2->raise();
        label_trem4->raise();
        label_trem5->raise();
        label_trem3->raise();
        label_trem1->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1168, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_trem1->setText(QCoreApplication::translate("MainWindow", "T1", nullptr));
        label_trilho1->setText(QString());
        label_trilho3->setText(QString());
        label_trilho4->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Parar", nullptr));
        label_trilho4_2->setText(QString());
        label_trilho1_2->setText(QString());
        label_trem2->setText(QCoreApplication::translate("MainWindow", "T2", nullptr));
        label_trilho4_3->setText(QString());
        label_trilho3_2->setText(QString());
        label_trilho2_3->setText(QString());
        label_trilho4_4->setText(QString());
        label_trilho3_3->setText(QString());
        label_trilho2_4->setText(QString());
        label_trilho1_5->setText(QString());
        label_trilho4_5->setText(QString());
        label_trilho3_4->setText(QString());
        label_trilho2_5->setText(QString());
        label_trem3->setText(QCoreApplication::translate("MainWindow", "T3", nullptr));
        label_trem4->setText(QCoreApplication::translate("MainWindow", "T4", nullptr));
        label_trem5->setText(QCoreApplication::translate("MainWindow", "T5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
