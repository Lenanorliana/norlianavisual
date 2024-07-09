#include "formpenawaran.h"
#include "ui_formpenawaran.h"
#include "QMessageBox"

FormPenawaran::FormPenawaran(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormPenawaran)
{
    ui->setupUi(this);

    loadTabelPenawaran();
}

void FormPenawaran::loadTabelPenawaran()
{
    tabelModel = new QSqlQueryModel(this);
    tabelModel->setQuery("SELECT * FROM penawaran ORDER BY nopenawaran ASC");
    tabelModel->setHeaderData(0,Qt::Horizontal,QObject::tr("No Penawaran"));
    tabelModel->setHeaderData(1,Qt::Horizontal,QObject::tr("ID Barang"));
    tabelModel->setHeaderData(2,Qt::Horizontal,QObject::tr("Status"));
    tabelModel->setHeaderData(3,Qt::Horizontal,QObject::tr("Harga"));

    ui->tablePenawaran->setModel(tabelModel);
    ui->tablePenawaran->setColumnWidth(0,100);
    ui->tablePenawaran->setColumnWidth(1,100);
    ui->tablePenawaran->setColumnWidth(2,100);
    ui->tablePenawaran->setColumnWidth(3,100);
    ui->tablePenawaran->show();
}

FormPenawaran::~FormPenawaran()
{
    delete ui;
}

void FormPenawaran::on_pushButton_clicked()
{
    if(ui->noPenawaranLineEdit->text().isEmpty()){
        QMessageBox::information(this, "Warning","No Penawaran belum diisi");
        ui->noPenawaranLineEdit->setFocus();
    }else if (ui->iDBarangLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","ID Barang belum diisi");
        ui->iDBarangLineEdit->setFocus();
    }else if (ui->statusLineEdit_2->text().isEmpty()){
        QMessageBox::information(this, "warning","Status belum diisi");
        ui->statusLineEdit_2->setFocus();
    }else if (ui->hargaLineEdit_2->text().isEmpty()){
        QMessageBox::information(this, "warning","Harga belum diisi");
        ui->hargaLineEdit_2->setFocus();
    }else{
        QSqlQuery duplicate;
        duplicate.prepare("SELECT * FROM penawaran WHERE nopenawaran='"+ui->noPenawaranLineEdit->text()+"'");
        duplicate.exec();
        if(duplicate.next()){
            QMessageBox::information(this, "warning","No Penawaran sudah terdaftar");
            ui->iDBarangLineEdit->setText(duplicate.value(1).toString());
            ui->statusLineEdit_2->setText(duplicate.value(2).toString());
            ui->hargaLineEdit_2->setText(duplicate.value(3).toString());
        }else{
            QSqlQuery sql(koneksi);
            sql.prepare("INSERT INTO penawaran (nopenawaran,idbarang,status,harga)"
                        "VALUES(:nopenawaran,:idbarang,:status,:harga)");
            sql.bindValue(":nopenawaran",ui->noPenawaranLineEdit->text());
            sql.bindValue(":idbarang",ui->iDBarangLineEdit->text());
            sql.bindValue(":status",ui->statusLineEdit_2->text());
            sql.bindValue(":harga",ui->hargaLineEdit_2->text());

            if (sql.exec()){
                QMessageBox::information(this, "warning", "Data Berhasil Di Simpan");
            }else{
                qDebug()<<sql.lastError().text();
            }
        }
    }
}


void FormPenawaran::on_pushButton_2_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("UPDATE penawaran SET idbarang=:idbarang,status=:status,harga=:harga where nopenawaran=:nopenawaran");
    sql.bindValue(":nopenawaran",ui->noPenawaranLineEdit->text());
    sql.bindValue(":idbarang",ui->iDBarangLineEdit->text());
    sql.bindValue(":status",ui->statusLineEdit_2->text());
    sql.bindValue(":harga",ui->hargaLineEdit_2->text());
    if (sql.exec()){
        QMessageBox::information(this, "warning", "Data Berhasil Di Ubah");
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormPenawaran::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM penawaran WHERE nopenawaran=:nopenawaran");
    sql.bindValue(":nopenawaran",ui->noPenawaranLineEdit->text());

    if (sql.exec()){
        QMessageBox::information(this, "warning", "Data Berhasil Di Hapus");
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormPenawaran::on_tablePenawaran_activated(const QModelIndex &index)
{
    int baris=ui->tablePenawaran->currentIndex().row();
    ui->noPenawaranLineEdit->setText(ui->tablePenawaran->model()->index(baris, 0).data().toString());
    ui->iDBarangLineEdit->setText(ui->tablePenawaran->model()->index(baris, 1).data().toString());
    ui->statusLineEdit_2->setText(ui->tablePenawaran->model()->index(baris, 2).data().toString());
    ui->hargaLineEdit_2->setText(ui->tablePenawaran->model()->index(baris, 3).data().toString());
}



