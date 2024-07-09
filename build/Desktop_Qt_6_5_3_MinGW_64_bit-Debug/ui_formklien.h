/********************************************************************************
** Form generated from reading UI file 'formklien.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMKLIEN_H
#define UI_FORMKLIEN_H

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

class Ui_FormKlien
{
public:
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QGroupBox *formGroupBox;
    QFormLayout *formLayout;
    QLabel *idklienLabel;
    QLineEdit *idklienLineEdit;
    QLabel *namaklienLabel;
    QLineEdit *namaklienLineEdit;
    QLabel *alamatklienLabel;
    QLineEdit *alamatklienLineEdit;
    QLabel *telpklienLabel;
    QLineEdit *telpklienLineEdit;
    QTableView *tableKlien;

    void setupUi(QWidget *FormKlien)
    {
        if (FormKlien->objectName().isEmpty())
            FormKlien->setObjectName("FormKlien");
        FormKlien->resize(400, 424);
        pushButton_2 = new QPushButton(FormKlien);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(170, 180, 75, 24));
        pushButton_3 = new QPushButton(FormKlien);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(280, 180, 75, 24));
        pushButton = new QPushButton(FormKlien);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(50, 180, 75, 24));
        formGroupBox = new QGroupBox(FormKlien);
        formGroupBox->setObjectName("formGroupBox");
        formGroupBox->setGeometry(QRect(30, 30, 341, 141));
        formLayout = new QFormLayout(formGroupBox);
        formLayout->setObjectName("formLayout");
        idklienLabel = new QLabel(formGroupBox);
        idklienLabel->setObjectName("idklienLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, idklienLabel);

        idklienLineEdit = new QLineEdit(formGroupBox);
        idklienLineEdit->setObjectName("idklienLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, idklienLineEdit);

        namaklienLabel = new QLabel(formGroupBox);
        namaklienLabel->setObjectName("namaklienLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, namaklienLabel);

        namaklienLineEdit = new QLineEdit(formGroupBox);
        namaklienLineEdit->setObjectName("namaklienLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, namaklienLineEdit);

        alamatklienLabel = new QLabel(formGroupBox);
        alamatklienLabel->setObjectName("alamatklienLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, alamatklienLabel);

        alamatklienLineEdit = new QLineEdit(formGroupBox);
        alamatklienLineEdit->setObjectName("alamatklienLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, alamatklienLineEdit);

        telpklienLabel = new QLabel(formGroupBox);
        telpklienLabel->setObjectName("telpklienLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, telpklienLabel);

        telpklienLineEdit = new QLineEdit(formGroupBox);
        telpklienLineEdit->setObjectName("telpklienLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, telpklienLineEdit);

        tableKlien = new QTableView(FormKlien);
        tableKlien->setObjectName("tableKlien");
        tableKlien->setGeometry(QRect(20, 230, 361, 151));

        retranslateUi(FormKlien);

        QMetaObject::connectSlotsByName(FormKlien);
    } // setupUi

    void retranslateUi(QWidget *FormKlien)
    {
        FormKlien->setWindowTitle(QCoreApplication::translate("FormKlien", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormKlien", "Ubah", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormKlien", "Hapus", nullptr));
        pushButton->setText(QCoreApplication::translate("FormKlien", "Simpan", nullptr));
        idklienLabel->setText(QCoreApplication::translate("FormKlien", "idklien", nullptr));
        namaklienLabel->setText(QCoreApplication::translate("FormKlien", "namaklien", nullptr));
        alamatklienLabel->setText(QCoreApplication::translate("FormKlien", "alamatklien", nullptr));
        telpklienLabel->setText(QCoreApplication::translate("FormKlien", "telpklien", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormKlien: public Ui_FormKlien {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMKLIEN_H
