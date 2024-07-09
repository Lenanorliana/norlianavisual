/********************************************************************************
** Form generated from reading UI file 'formgudang.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMGUDANG_H
#define UI_FORMGUDANG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormGudang
{
public:
    QPushButton *pushButton_3;
    QGroupBox *formGroupBox;
    QFormLayout *formLayout;
    QLabel *idgudangLabel;
    QLineEdit *idgudangLineEdit;
    QLabel *alamatgudangLabel;
    QLineEdit *alamatgudangLineEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QTableView *tableGudang;

    void setupUi(QWidget *FormGudang)
    {
        if (FormGudang->objectName().isEmpty())
            FormGudang->setObjectName("FormGudang");
        FormGudang->resize(398, 339);
        pushButton_3 = new QPushButton(FormGudang);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(260, 130, 75, 24));
        formGroupBox = new QGroupBox(FormGudang);
        formGroupBox->setObjectName("formGroupBox");
        formGroupBox->setGeometry(QRect(40, 19, 321, 81));
        formLayout = new QFormLayout(formGroupBox);
        formLayout->setObjectName("formLayout");
        idgudangLabel = new QLabel(formGroupBox);
        idgudangLabel->setObjectName("idgudangLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, idgudangLabel);

        idgudangLineEdit = new QLineEdit(formGroupBox);
        idgudangLineEdit->setObjectName("idgudangLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, idgudangLineEdit);

        alamatgudangLabel = new QLabel(formGroupBox);
        alamatgudangLabel->setObjectName("alamatgudangLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, alamatgudangLabel);

        alamatgudangLineEdit = new QLineEdit(formGroupBox);
        alamatgudangLineEdit->setObjectName("alamatgudangLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, alamatgudangLineEdit);

        pushButton_2 = new QPushButton(FormGudang);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(150, 130, 75, 24));
        pushButton = new QPushButton(FormGudang);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 130, 75, 24));
        tableGudang = new QTableView(FormGudang);
        tableGudang->setObjectName("tableGudang");
        tableGudang->setGeometry(QRect(30, 170, 331, 131));

        retranslateUi(FormGudang);

        QMetaObject::connectSlotsByName(FormGudang);
    } // setupUi

    void retranslateUi(QWidget *FormGudang)
    {
        FormGudang->setWindowTitle(QCoreApplication::translate("FormGudang", "Form", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormGudang", "Hapus", nullptr));
        idgudangLabel->setText(QCoreApplication::translate("FormGudang", "idgudang", nullptr));
        alamatgudangLabel->setText(QCoreApplication::translate("FormGudang", "alamatgudang", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormGudang", "Ubah", nullptr));
        pushButton->setText(QCoreApplication::translate("FormGudang", "Simpan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormGudang: public Ui_FormGudang {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMGUDANG_H
