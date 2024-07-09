/********************************************************************************
** Form generated from reading UI file 'formbarang.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMBARANG_H
#define UI_FORMBARANG_H

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

class Ui_FormBarang
{
public:
    QPushButton *pushButton_3;
    QGroupBox *formGroupBox;
    QFormLayout *formLayout;
    QLabel *id_barangLabel;
    QLineEdit *id_barangLineEdit;
    QLabel *namaBarangLabel;
    QLineEdit *namaBarangLineEdit;
    QLabel *spesipikasiLabel;
    QLineEdit *spesipikasiLineEdit;
    QLabel *hargaSatuanLabel;
    QLineEdit *hargaSatuanLineEdit;
    QPushButton *pushButton_2;
    QPushButton *simpan;
    QTableView *tableBarang;

    void setupUi(QWidget *FormBarang)
    {
        if (FormBarang->objectName().isEmpty())
            FormBarang->setObjectName("FormBarang");
        FormBarang->resize(438, 437);
        pushButton_3 = new QPushButton(FormBarang);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(290, 170, 75, 24));
        formGroupBox = new QGroupBox(FormBarang);
        formGroupBox->setObjectName("formGroupBox");
        formGroupBox->setGeometry(QRect(30, 20, 341, 131));
        formLayout = new QFormLayout(formGroupBox);
        formLayout->setObjectName("formLayout");
        id_barangLabel = new QLabel(formGroupBox);
        id_barangLabel->setObjectName("id_barangLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, id_barangLabel);

        id_barangLineEdit = new QLineEdit(formGroupBox);
        id_barangLineEdit->setObjectName("id_barangLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, id_barangLineEdit);

        namaBarangLabel = new QLabel(formGroupBox);
        namaBarangLabel->setObjectName("namaBarangLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, namaBarangLabel);

        namaBarangLineEdit = new QLineEdit(formGroupBox);
        namaBarangLineEdit->setObjectName("namaBarangLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, namaBarangLineEdit);

        spesipikasiLabel = new QLabel(formGroupBox);
        spesipikasiLabel->setObjectName("spesipikasiLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, spesipikasiLabel);

        spesipikasiLineEdit = new QLineEdit(formGroupBox);
        spesipikasiLineEdit->setObjectName("spesipikasiLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, spesipikasiLineEdit);

        hargaSatuanLabel = new QLabel(formGroupBox);
        hargaSatuanLabel->setObjectName("hargaSatuanLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, hargaSatuanLabel);

        hargaSatuanLineEdit = new QLineEdit(formGroupBox);
        hargaSatuanLineEdit->setObjectName("hargaSatuanLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, hargaSatuanLineEdit);

        pushButton_2 = new QPushButton(FormBarang);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(160, 170, 75, 24));
        simpan = new QPushButton(FormBarang);
        simpan->setObjectName("simpan");
        simpan->setGeometry(QRect(30, 170, 75, 24));
        tableBarang = new QTableView(FormBarang);
        tableBarang->setObjectName("tableBarang");
        tableBarang->setGeometry(QRect(20, 210, 381, 192));

        retranslateUi(FormBarang);

        QMetaObject::connectSlotsByName(FormBarang);
    } // setupUi

    void retranslateUi(QWidget *FormBarang)
    {
        FormBarang->setWindowTitle(QCoreApplication::translate("FormBarang", "Form", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormBarang", "hapus", nullptr));
        id_barangLabel->setText(QCoreApplication::translate("FormBarang", "id_barang", nullptr));
        namaBarangLabel->setText(QCoreApplication::translate("FormBarang", "nama barang", nullptr));
        spesipikasiLabel->setText(QCoreApplication::translate("FormBarang", "spesipikasi", nullptr));
        hargaSatuanLabel->setText(QCoreApplication::translate("FormBarang", "harga satuan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormBarang", "ubah", nullptr));
        simpan->setText(QCoreApplication::translate("FormBarang", "Simpan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormBarang: public Ui_FormBarang {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMBARANG_H
