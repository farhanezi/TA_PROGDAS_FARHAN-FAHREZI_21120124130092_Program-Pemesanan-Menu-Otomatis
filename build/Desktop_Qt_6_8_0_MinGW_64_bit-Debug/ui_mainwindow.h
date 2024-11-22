/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
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
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *Hal1;
    QPushButton *bnmulai;
    QWidget *Hal2;
    QPushButton *bnramen;
    QPushButton *bnsushi;
    QPushButton *bnminum;
    QWidget *Hal3Ramen;
    QPushButton *back_2;
    QPushButton *nextconfirm_3;
    QLabel *labelramen1;
    QPushButton *minramen1;
    QPushButton *plusramen1;
    QPushButton *plusramen2;
    QLabel *labelramen2;
    QPushButton *minramen2;
    QLabel *labelramen3;
    QPushButton *minramen3;
    QPushButton *plusramen3;
    QWidget *Hal4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QWidget *Hal5;
    QPushButton *backfirst;
    QWidget *Hal3Sushi;
    QPushButton *back_3;
    QPushButton *nextconfirm_2;
    QPushButton *plussushi1;
    QLabel *labelsushi2;
    QLabel *labelsushi1;
    QPushButton *minsushi1;
    QPushButton *minsushi3;
    QPushButton *minsushi2;
    QPushButton *plussushi3;
    QLabel *labelsushi3;
    QPushButton *plussushi2;
    QWidget *Hal3Minum;
    QPushButton *back;
    QPushButton *nextconfirm;
    QPushButton *plusminum3;
    QLabel *labelminum3;
    QPushButton *minminum3;
    QPushButton *plusminum1;
    QLabel *labelminum2;
    QLabel *labelminum1;
    QPushButton *plusminum2;
    QPushButton *minminum1;
    QPushButton *minminum2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(746, 450);
        MainWindow->setMaximumSize(QSize(746, 450));
        MainWindow->setAutoFillBackground(true);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-color:  rgb(255, 170, 127)F;\n"
""));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 746, 411));
        stackedWidget->setMaximumSize(QSize(746, 450));
        stackedWidget->setAutoFillBackground(false);
        Hal1 = new QWidget();
        Hal1->setObjectName("Hal1");
        Hal1->setEnabled(true);
        Hal1->setMaximumSize(QSize(746, 450));
        Hal1->setToolTipDuration(-1);
        Hal1->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-image: url(D:/Farhan File Urgency/Kuliah/Praktikum Progdas/TA/desain/hal1.jpg);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-color: #f0f0f0; \n"
"}"));
        bnmulai = new QPushButton(Hal1);
        bnmulai->setObjectName("bnmulai");
        bnmulai->setGeometry(QRect(320, 210, 111, 51));
        bnmulai->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        bnmulai->setContextMenuPolicy(Qt::ContextMenuPolicy::NoContextMenu);
        bnmulai->setAutoFillBackground(false);
        stackedWidget->addWidget(Hal1);
        Hal2 = new QWidget();
        Hal2->setObjectName("Hal2");
        Hal2->setMaximumSize(QSize(746, 450));
        Hal2->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-image: url(D:/Farhan File Urgency/Kuliah/Praktikum Progdas/TA/desain/menu1.jpg);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-color: #f0f0f0; \n"
"}"));
        bnramen = new QPushButton(Hal2);
        bnramen->setObjectName("bnramen");
        bnramen->setGeometry(QRect(90, 160, 171, 201));
        bnsushi = new QPushButton(Hal2);
        bnsushi->setObjectName("bnsushi");
        bnsushi->setGeometry(QRect(290, 160, 171, 201));
        bnminum = new QPushButton(Hal2);
        bnminum->setObjectName("bnminum");
        bnminum->setGeometry(QRect(490, 160, 171, 201));
        stackedWidget->addWidget(Hal2);
        Hal3Ramen = new QWidget();
        Hal3Ramen->setObjectName("Hal3Ramen");
        Hal3Ramen->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-image: url(D:/Farhan File Urgency/Kuliah/Praktikum Progdas/TA/desain/ramen1.jpg);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-color: #f0f0f0; \n"
"}"));
        back_2 = new QPushButton(Hal3Ramen);
        back_2->setObjectName("back_2");
        back_2->setGeometry(QRect(545, 363, 91, 41));
        nextconfirm_3 = new QPushButton(Hal3Ramen);
        nextconfirm_3->setObjectName("nextconfirm_3");
        nextconfirm_3->setGeometry(QRect(642, 363, 91, 41));
        labelramen1 = new QLabel(Hal3Ramen);
        labelramen1->setObjectName("labelramen1");
        labelramen1->setGeometry(QRect(212, 323, 16, 16));
        QFont font;
        font.setFamilies({QString::fromUtf8("HighriseDemo")});
        font.setPointSize(12);
        font.setBold(true);
        labelramen1->setFont(font);
        labelramen1->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-image: url(D:/Farhan File Urgency/Kuliah/Praktikum Progdas/TA/desain/putihhh.jpg);\n"
"	color: rgb(220, 72, 60);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-color: transparent; \n"
"	text-align: center;\n"
"}"));
        minramen1 = new QPushButton(Hal3Ramen);
        minramen1->setObjectName("minramen1");
        minramen1->setGeometry(QRect(234, 322, 16, 16));
        plusramen1 = new QPushButton(Hal3Ramen);
        plusramen1->setObjectName("plusramen1");
        plusramen1->setGeometry(QRect(185, 322, 16, 16));
        plusramen2 = new QPushButton(Hal3Ramen);
        plusramen2->setObjectName("plusramen2");
        plusramen2->setGeometry(QRect(384, 322, 16, 16));
        labelramen2 = new QLabel(Hal3Ramen);
        labelramen2->setObjectName("labelramen2");
        labelramen2->setGeometry(QRect(410, 323, 16, 16));
        labelramen2->setFont(font);
        labelramen2->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-image: url(D:/Farhan File Urgency/Kuliah/Praktikum Progdas/TA/desain/putihhh.jpg);\n"
"	color: rgb(220, 72, 60);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-color: transparent; \n"
"	text-align: center;\n"
"}"));
        minramen2 = new QPushButton(Hal3Ramen);
        minramen2->setObjectName("minramen2");
        minramen2->setGeometry(QRect(433, 322, 16, 16));
        labelramen3 = new QLabel(Hal3Ramen);
        labelramen3->setObjectName("labelramen3");
        labelramen3->setGeometry(QRect(609, 323, 16, 16));
        labelramen3->setFont(font);
        labelramen3->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-image: url(D:/Farhan File Urgency/Kuliah/Praktikum Progdas/TA/desain/putihhh.jpg);\n"
"	color: rgb(220, 72, 60);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-color: transparent; \n"
"	text-align: center;\n"
"}"));
        minramen3 = new QPushButton(Hal3Ramen);
        minramen3->setObjectName("minramen3");
        minramen3->setGeometry(QRect(632, 322, 16, 16));
        plusramen3 = new QPushButton(Hal3Ramen);
        plusramen3->setObjectName("plusramen3");
        plusramen3->setGeometry(QRect(582, 322, 16, 16));
        stackedWidget->addWidget(Hal3Ramen);
        Hal4 = new QWidget();
        Hal4->setObjectName("Hal4");
        Hal4->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-image: url(D:/Farhan File Urgency/Kuliah/Praktikum Progdas/TA/desain/konfirmasi.jpg);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-color: #f0f0f0; \n"
"}"));
        pushButton = new QPushButton(Hal4);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(510, 350, 111, 51));
        pushButton_2 = new QPushButton(Hal4);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(630, 350, 111, 51));
        label = new QLabel(Hal4);
        label->setObjectName("label");
        label->setGeometry(QRect(28, 109, 691, 231));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("HighriseDemo")});
        font1.setPointSize(14);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(202, 61, 43);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        stackedWidget->addWidget(Hal4);
        Hal5 = new QWidget();
        Hal5->setObjectName("Hal5");
        Hal5->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-image: url(D:/Farhan File Urgency/Kuliah/Praktikum Progdas/TA/desain/proses.jpg);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-color: #f0f0f0; \n"
"}"));
        backfirst = new QPushButton(Hal5);
        backfirst->setObjectName("backfirst");
        backfirst->setGeometry(QRect(320, 320, 111, 51));
        stackedWidget->addWidget(Hal5);
        Hal3Sushi = new QWidget();
        Hal3Sushi->setObjectName("Hal3Sushi");
        Hal3Sushi->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-image: url(D:/Farhan File Urgency/Kuliah/Praktikum Progdas/TA/desain/sushi1.jpg);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-color: #f0f0f0; \n"
"}"));
        back_3 = new QPushButton(Hal3Sushi);
        back_3->setObjectName("back_3");
        back_3->setGeometry(QRect(545, 363, 91, 41));
        nextconfirm_2 = new QPushButton(Hal3Sushi);
        nextconfirm_2->setObjectName("nextconfirm_2");
        nextconfirm_2->setGeometry(QRect(642, 363, 91, 41));
        plussushi1 = new QPushButton(Hal3Sushi);
        plussushi1->setObjectName("plussushi1");
        plussushi1->setGeometry(QRect(185, 323, 16, 16));
        labelsushi2 = new QLabel(Hal3Sushi);
        labelsushi2->setObjectName("labelsushi2");
        labelsushi2->setGeometry(QRect(410, 323, 16, 16));
        labelsushi2->setFont(font);
        labelsushi2->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-image: url(D:/Farhan File Urgency/Kuliah/Praktikum Progdas/TA/desain/putihhh.jpg);\n"
"	color: rgb(220, 72, 60);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-color: transparent; \n"
"	text-align: center;\n"
"}"));
        labelsushi1 = new QLabel(Hal3Sushi);
        labelsushi1->setObjectName("labelsushi1");
        labelsushi1->setGeometry(QRect(212, 323, 16, 16));
        labelsushi1->setFont(font);
        labelsushi1->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-image: url(D:/Farhan File Urgency/Kuliah/Praktikum Progdas/TA/desain/putihhh.jpg);\n"
"	color: rgb(220, 72, 60);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-color: transparent; \n"
"	text-align: center;\n"
"}"));
        minsushi1 = new QPushButton(Hal3Sushi);
        minsushi1->setObjectName("minsushi1");
        minsushi1->setGeometry(QRect(234, 323, 16, 16));
        minsushi3 = new QPushButton(Hal3Sushi);
        minsushi3->setObjectName("minsushi3");
        minsushi3->setGeometry(QRect(632, 323, 16, 16));
        minsushi2 = new QPushButton(Hal3Sushi);
        minsushi2->setObjectName("minsushi2");
        minsushi2->setGeometry(QRect(433, 323, 16, 16));
        plussushi3 = new QPushButton(Hal3Sushi);
        plussushi3->setObjectName("plussushi3");
        plussushi3->setGeometry(QRect(582, 323, 16, 16));
        labelsushi3 = new QLabel(Hal3Sushi);
        labelsushi3->setObjectName("labelsushi3");
        labelsushi3->setGeometry(QRect(609, 323, 16, 16));
        labelsushi3->setFont(font);
        labelsushi3->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-image: url(D:/Farhan File Urgency/Kuliah/Praktikum Progdas/TA/desain/putihhh.jpg);\n"
"	color: rgb(220, 72, 60);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-color: transparent; \n"
"	text-align: center;\n"
"}"));
        plussushi2 = new QPushButton(Hal3Sushi);
        plussushi2->setObjectName("plussushi2");
        plussushi2->setGeometry(QRect(384, 323, 16, 16));
        stackedWidget->addWidget(Hal3Sushi);
        Hal3Minum = new QWidget();
        Hal3Minum->setObjectName("Hal3Minum");
        Hal3Minum->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-image: url(D:/Farhan File Urgency/Kuliah/Praktikum Progdas/TA/desain/minum.jpg);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-color: #f0f0f0; \n"
"}"));
        back = new QPushButton(Hal3Minum);
        back->setObjectName("back");
        back->setGeometry(QRect(545, 363, 91, 41));
        nextconfirm = new QPushButton(Hal3Minum);
        nextconfirm->setObjectName("nextconfirm");
        nextconfirm->setGeometry(QRect(642, 363, 91, 41));
        plusminum3 = new QPushButton(Hal3Minum);
        plusminum3->setObjectName("plusminum3");
        plusminum3->setGeometry(QRect(582, 323, 16, 16));
        labelminum3 = new QLabel(Hal3Minum);
        labelminum3->setObjectName("labelminum3");
        labelminum3->setGeometry(QRect(609, 323, 16, 16));
        labelminum3->setFont(font);
        labelminum3->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-image: url(D:/Farhan File Urgency/Kuliah/Praktikum Progdas/TA/desain/putihhh.jpg);\n"
"	color: rgb(220, 72, 60);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-color: transparent; \n"
"	text-align: center;\n"
"}"));
        minminum3 = new QPushButton(Hal3Minum);
        minminum3->setObjectName("minminum3");
        minminum3->setGeometry(QRect(632, 323, 16, 16));
        plusminum1 = new QPushButton(Hal3Minum);
        plusminum1->setObjectName("plusminum1");
        plusminum1->setGeometry(QRect(185, 323, 16, 16));
        labelminum2 = new QLabel(Hal3Minum);
        labelminum2->setObjectName("labelminum2");
        labelminum2->setGeometry(QRect(410, 323, 16, 16));
        labelminum2->setFont(font);
        labelminum2->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-image: url(D:/Farhan File Urgency/Kuliah/Praktikum Progdas/TA/desain/putihhh.jpg);\n"
"	color: rgb(220, 72, 60);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-color: transparent; \n"
"	text-align: center;\n"
"}"));
        labelminum1 = new QLabel(Hal3Minum);
        labelminum1->setObjectName("labelminum1");
        labelminum1->setGeometry(QRect(212, 323, 16, 16));
        labelminum1->setFont(font);
        labelminum1->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-image: url(D:/Farhan File Urgency/Kuliah/Praktikum Progdas/TA/desain/putihhh.jpg);\n"
"	color: rgb(220, 72, 60);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-color: transparent; \n"
"	text-align: center;\n"
"}"));
        plusminum2 = new QPushButton(Hal3Minum);
        plusminum2->setObjectName("plusminum2");
        plusminum2->setGeometry(QRect(384, 323, 16, 16));
        minminum1 = new QPushButton(Hal3Minum);
        minminum1->setObjectName("minminum1");
        minminum1->setGeometry(QRect(234, 323, 16, 16));
        minminum2 = new QPushButton(Hal3Minum);
        minminum2->setObjectName("minminum2");
        minminum2->setGeometry(QRect(433, 323, 16, 16));
        stackedWidget->addWidget(Hal3Minum);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 746, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        statusbar->setEnabled(false);
        statusbar->setSizeGripEnabled(false);
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(tooltip)
        bnmulai->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        bnmulai->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        bnramen->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        bnsushi->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        bnminum->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        back_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        nextconfirm_3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        labelramen1->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        minramen1->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        plusramen1->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        plusramen2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        labelramen2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        minramen2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        labelramen3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        minramen3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        plusramen3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TIDAK ADA PESANAN", nullptr));
        backfirst->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        back_3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        nextconfirm_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        plussushi1->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        labelsushi2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        labelsushi1->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        minsushi1->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        minsushi3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        minsushi2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        plussushi3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        labelsushi3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        plussushi2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        back->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        nextconfirm->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        plusminum3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        labelminum3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        minminum3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        plusminum1->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        labelminum2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        labelminum1->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        plusminum2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        minminum1->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        minminum2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
