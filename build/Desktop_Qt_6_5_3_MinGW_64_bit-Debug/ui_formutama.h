/********************************************************************************
** Form generated from reading UI file 'formutama.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMUTAMA_H
#define UI_FORMUTAMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormUtama
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FormUtama)
    {
        if (FormUtama->objectName().isEmpty())
            FormUtama->setObjectName("FormUtama");
        FormUtama->resize(631, 210);
        centralwidget = new QWidget(FormUtama);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 90, 101, 29));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(160, 90, 121, 29));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(310, 90, 111, 29));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(460, 90, 131, 29));
        FormUtama->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FormUtama);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 631, 26));
        FormUtama->setMenuBar(menubar);
        statusbar = new QStatusBar(FormUtama);
        statusbar->setObjectName("statusbar");
        FormUtama->setStatusBar(statusbar);

        retranslateUi(FormUtama);

        QMetaObject::connectSlotsByName(FormUtama);
    } // setupUi

    void retranslateUi(QMainWindow *FormUtama)
    {
        FormUtama->setWindowTitle(QCoreApplication::translate("FormUtama", "FormUtama", nullptr));
        pushButton->setText(QCoreApplication::translate("FormUtama", "Form Barang", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormUtama", "Form Gudang", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormUtama", "Form Klien", nullptr));
        pushButton_4->setText(QCoreApplication::translate("FormUtama", "Form Penawaran", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormUtama: public Ui_FormUtama {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMUTAMA_H
