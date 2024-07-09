#include "formbarang.h"
#include "ui_formbarang.h"
#include "QMessageBox"

FormBarang::FormBarang(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormBarang)
{
    ui->setupUi(this);

    QSqlDatabase koneksi = QSqlDatabase::addDatabase("QODBC");
    koneksi.setDatabaseName("dsn_penjualan");
    koneksi.setUserName("root");
    koneksi.setPassword("");

    if(!koneksi.open()){
        qDebug()<<koneksi.lastError().text();
    }else{
        qDebug()<<"Database Terkoneksi";

    }

    loadTabelBarang();
}

void FormBarang::loadTabelBarang()
{
    tabelModel = new QSqlQueryModel(this);
    tabelModel->setQuery("SELECT * FROM barang1 ORDER BY idbarang ASC");
    tabelModel->setHeaderData(0,Qt::Horizontal,QObject::tr("ID Barang"));
    tabelModel->setHeaderData(1,Qt::Horizontal,QObject::tr("Nama Barang"));
    tabelModel->setHeaderData(2,Qt::Horizontal,QObject::tr("Spesifikasi"));
    tabelModel->setHeaderData(3,Qt::Horizontal,QObject::tr("Harga Satuan"));

    ui->tableBarang->setModel(tabelModel);
    ui->tableBarang->setColumnWidth(0,100);
    ui->tableBarang->setColumnWidth(1,100);
    ui->tableBarang->setColumnWidth(2,100);
    ui->tableBarang->setColumnWidth(3,100);
    ui->tableBarang->show();
}

FormBarang::~FormBarang()
{
    delete ui;
}

void FormBarang::on_simpan_clicked()
{
    if(ui->id_barangLineEdit->text().isEmpty()){
        QMessageBox::information(this, "Warning","ID Barang belum diisi");
        ui->id_barangLineEdit->setFocus();
    }else if (ui->namaBarangLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Nama Barang belum diisi");
        ui->namaBarangLineEdit->setFocus();
    }else if (ui->spesipikasiLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Spesifikasi belum diisi");
        ui->spesipikasiLineEdit->setFocus();
    }else if (ui->hargaSatuanLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Harga Satuan belum diisi");
        ui->hargaSatuanLineEdit->setFocus();
    }else{
        QSqlQuery duplicate;
        duplicate.prepare("SELECT * FROM barang1 WHERE idbarang='"+ui->id_barangLineEdit->text()+"'");
        duplicate.exec();
        if(duplicate.next()){
            QMessageBox::information(this, "warning","ID Barang sudah terdaftar");
            ui->namaBarangLineEdit->setText(duplicate.value(1).toString());
            ui->spesipikasiLineEdit->setText(duplicate.value(2).toString());
            ui->hargaSatuanLineEdit->setText(duplicate.value(3).toString());
        }else{
            QSqlQuery sql(koneksi);
            sql.prepare("INSERT INTO barang1 (idbarang,nama,spesipikasi,satuan)"
                        "VALUES(:idbarang,:nama,:spesipikasi,:satuan)");
            sql.bindValue(":idbarang",ui->id_barangLineEdit->text());
            sql.bindValue(":nama",ui->namaBarangLineEdit->text());
            sql.bindValue(":spesipikasi",ui->spesipikasiLineEdit->text());
            sql.bindValue(":satuan",ui->hargaSatuanLineEdit->text());

            if (sql.exec()){
                QMessageBox::information(this, "warning", "Data Berhasil Di Simpan");
            }else{
                qDebug()<<sql.lastError().text();
            }
        }
    }
}


void FormBarang::on_pushButton_2_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("UPDATE barang1 SET nama=:nama, spesipikasi=:spesipikasi, satuan=:satuan where idbarang=:idbarang");
    sql.bindValue(":idbarang",ui->id_barangLineEdit->text());
    sql.bindValue(":nama",ui->namaBarangLineEdit->text());
    sql.bindValue(":spesipikasi",ui->spesipikasiLineEdit->text());
    sql.bindValue(":satuan",ui->hargaSatuanLineEdit->text());

    if (sql.exec()){
        QMessageBox::information(this, "warning", "Data Berhasil Di Ubah");
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormBarang::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM barang1 WHERE idbarang=:idbarang");
    sql.bindValue(":idbarang",ui->id_barangLineEdit->text());

    if (sql.exec()){
        QMessageBox::information(this, "warning", "Data Berhasil Di Hapus");
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormBarang::on_tableBarang_activated(const QModelIndex &index)
{
    int baris=ui->tableBarang->currentIndex().row();
    ui->id_barangLineEdit->setText(ui->tableBarang->model()->index(baris, 0).data().toString());
    ui->namaBarangLineEdit->setText(ui->tableBarang->model()->index(baris, 1).data().toString());
    ui->spesipikasiLineEdit->setText(ui->tableBarang->model()->index(baris, 2).data().toString());
    ui->hargaSatuanLineEdit->setText(ui->tableBarang->model()->index(baris, 3).data().toString());
}

