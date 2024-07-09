/********************************************************************************
** Form generated from reading UI file 'formpenawaran.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMPENAWARAN_H
#define UI_FORMPENAWARAN_H

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

class Ui_FormPenawaran
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QTableView *tablePenawaran;
    QGroupBox *formGroupBox;
    QFormLayout *formLayout;
    QLabel *noPenawaranLabel;
    QLineEdit *noPenawaranLineEdit;
    QLabel *iDBarangLabel;
    QLineEdit *iDBarangLineEdit;
    QLabel *statusLabel_2;
    QLineEdit *statusLineEdit_2;
    QLabel *hargaLabel_2;
    QLineEdit *hargaLineEdit_2;

    void setupUi(QWidget *FormPenawaran)
    {
        if (FormPenawaran->objectName().isEmpty())
            FormPenawaran->setObjectName("FormPenawaran");
        FormPenawaran->resize(400, 427);
        pushButton = new QPushButton(FormPenawaran);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 190, 75, 24));
        pushButton_2 = new QPushButton(FormPenawaran);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(160, 190, 75, 24));
        pushButton_3 = new QPushButton(FormPenawaran);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(280, 190, 75, 24));
        tablePenawaran = new QTableView(FormPenawaran);
        tablePenawaran->setObjectName("tablePenawaran");
        tablePenawaran->setGeometry(QRect(20, 230, 361, 171));
        formGroupBox = new QGroupBox(FormPenawaran);
        formGroupBox->setObjectName("formGroupBox");
        formGroupBox->setGeometry(QRect(30, 20, 351, 131));
        formLayout = new QFormLayout(formGroupBox);
        formLayout->setObjectName("formLayout");
        noPenawaranLabel = new QLabel(formGroupBox);
        noPenawaranLabel->setObjectName("noPenawaranLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, noPenawaranLabel);

        noPenawaranLineEdit = new QLineEdit(formGroupBox);
        noPenawaranLineEdit->setObjectName("noPenawaranLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, noPenawaranLineEdit);

        iDBarangLabel = new QLabel(formGroupBox);
        iDBarangLabel->setObjectName("iDBarangLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, iDBarangLabel);

        iDBarangLineEdit = new QLineEdit(formGroupBox);
        iDBarangLineEdit->setObjectName("iDBarangLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, iDBarangLineEdit);

        statusLabel_2 = new QLabel(formGroupBox);
        statusLabel_2->setObjectName("statusLabel_2");

        formLayout->setWidget(2, QFormLayout::LabelRole, statusLabel_2);

        statusLineEdit_2 = new QLineEdit(formGroupBox);
        statusLineEdit_2->setObjectName("statusLineEdit_2");

        formLayout->setWidget(2, QFormLayout::FieldRole, statusLineEdit_2);

        hargaLabel_2 = new QLabel(formGroupBox);
        hargaLabel_2->setObjectName("hargaLabel_2");

        formLayout->setWidget(3, QFormLayout::LabelRole, hargaLabel_2);

        hargaLineEdit_2 = new QLineEdit(formGroupBox);
        hargaLineEdit_2->setObjectName("hargaLineEdit_2");

        formLayout->setWidget(3, QFormLayout::FieldRole, hargaLineEdit_2);


        retranslateUi(FormPenawaran);

        QMetaObject::connectSlotsByName(FormPenawaran);
    } // setupUi

    void retranslateUi(QWidget *FormPenawaran)
    {
        FormPenawaran->setWindowTitle(QCoreApplication::translate("FormPenawaran", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("FormPenawaran", "Simpan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormPenawaran", "Ubah", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormPenawaran", "Hapus", nullptr));
        noPenawaranLabel->setText(QCoreApplication::translate("FormPenawaran", "No Penawaran", nullptr));
        iDBarangLabel->setText(QCoreApplication::translate("FormPenawaran", "ID Barang", nullptr));
        statusLabel_2->setText(QCoreApplication::translate("FormPenawaran", "Status", nullptr));
        hargaLabel_2->setText(QCoreApplication::translate("FormPenawaran", "Harga", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormPenawaran: public Ui_FormPenawaran {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMPENAWARAN_H
