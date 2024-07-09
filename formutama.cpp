#include "formutama.h"
#include "ui_formutama.h"

FormUtama::FormUtama(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FormUtama)
{
    ui->setupUi(this);
    barang = new FormBarang;
    gudang = new FormGudang;
    klien = new FormKlien;
    penawaran = new FormPenawaran;
}

FormUtama::~FormUtama()
{
    delete ui;
}

void FormUtama::on_pushButton_clicked()
{
    barang->show();
}


void FormUtama::on_pushButton_2_clicked()
{
    gudang->show();
}


void FormUtama::on_pushButton_3_clicked()
{
    klien->show();
}


void FormUtama::on_pushButton_4_clicked()
{
    penawaran->show();
}

