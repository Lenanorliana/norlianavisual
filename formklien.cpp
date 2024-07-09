#include "formklien.h"
#include "ui_formklien.h"
#include "QMessageBox"

FormKlien::FormKlien(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormKlien)
{
    ui->setupUi(this);

    loadTabelKlien();
}

void FormKlien::loadTabelKlien()
{
    tabelModel = new QSqlQueryModel(this);
    tabelModel->setQuery("SELECT * FROM klien ORDER BY idklien ASC");
    tabelModel->setHeaderData(0,Qt::Horizontal,QObject::tr("ID Klien"));
    tabelModel->setHeaderData(1,Qt::Horizontal,QObject::tr("Nama Klien"));
    tabelModel->setHeaderData(2,Qt::Horizontal,QObject::tr("Alamat Klien"));
    tabelModel->setHeaderData(3,Qt::Horizontal,QObject::tr("Telp Klien"));

    ui->tableKlien->setModel(tabelModel);
    ui->tableKlien->setColumnWidth(0,100);
    ui->tableKlien->setColumnWidth(1,100);
    ui->tableKlien->setColumnWidth(2,100);
    ui->tableKlien->setColumnWidth(3,100);
    ui->tableKlien->show();
}

FormKlien::~FormKlien()
{
    delete ui;
}

void FormKlien::on_pushButton_clicked()
{
    if(ui->idklienLineEdit->text().isEmpty()){
        QMessageBox::information(this, "Warning","ID Klien belum diisi");
        ui->idklienLineEdit->setFocus();
    }else if (ui->namaklienLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Nama Klien belum diisi");
        ui->namaklienLineEdit->setFocus();
    }else if (ui->alamatklienLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Alamat Klien belum diisi");
        ui->alamatklienLineEdit->setFocus();
    }else if (ui->telpklienLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Telp Klien belum diisi");
        ui->telpklienLineEdit->setFocus();
    }else{
        QSqlQuery duplicate;
        duplicate.prepare("SELECT * FROM klien WHERE idklien='"+ui->idklienLineEdit->text()+"'");
        duplicate.exec();
        if(duplicate.next()){
            QMessageBox::information(this, "warning","ID Klien sudah terdaftar");
            ui->namaklienLineEdit->setText(duplicate.value(1).toString());
            ui->alamatklienLineEdit->setText(duplicate.value(2).toString());
            ui->telpklienLineEdit->setText(duplicate.value(3).toString());
        }else{
            QSqlQuery sql(koneksi);
            sql.prepare("INSERT INTO klien (idklien,namaklien,alamat,telp)"
                        "VALUES(:idklien,:namaklien,:alamat,:telp)");
            sql.bindValue(":idklien",ui->idklienLineEdit->text());
            sql.bindValue(":namaklien",ui->namaklienLineEdit->text());
            sql.bindValue(":alamat",ui->alamatklienLineEdit->text());
            sql.bindValue(":telp",ui->telpklienLineEdit->text());

            if (sql.exec()){
                QMessageBox::information(this, "warning", "Data Berhasil Di Simpan");
            }else{
                qDebug()<<sql.lastError().text();
            }
        }
    }
}


void FormKlien::on_pushButton_2_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("UPDATE klien SET namaklien=:namaklien,alamat=:alamat,telp=:telp where idklien=:idklien");
    sql.bindValue(":idklien",ui->idklienLineEdit->text());
    sql.bindValue(":namaklien",ui->namaklienLineEdit->text());
    sql.bindValue(":alamat",ui->alamatklienLineEdit->text());
    sql.bindValue(":telp",ui->telpklienLineEdit->text());

    if (sql.exec()){
        QMessageBox::information(this, "warning", "Data Berhasil Di Ubah");
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormKlien::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM klien WHERE idklien=:idklien");
    sql.bindValue(":idklien",ui->idklienLineEdit->text());

    if (sql.exec()){
        QMessageBox::information(this, "warning", "Data Berhasil Di Hapus");
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormKlien::on_tableKlien_activated(const QModelIndex &index)
{
    int baris=ui->tableKlien->currentIndex().row();
    ui->idklienLineEdit->setText(ui->tableKlien->model()->index(baris, 0).data().toString());
    ui->namaklienLineEdit->setText(ui->tableKlien->model()->index(baris, 1).data().toString());
    ui->alamatklienLineEdit->setText(ui->tableKlien->model()->index(baris, 2).data().toString());
    ui->telpklienLineEdit->setText(ui->tableKlien->model()->index(baris, 3).data().toString());
}

