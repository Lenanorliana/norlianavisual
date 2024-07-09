#include "formgudang.h"
#include "ui_formgudang.h"
#include "QMessageBox"

FormGudang::FormGudang(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormGudang)
{
    ui->setupUi(this);

    loadTabelGudang();
}

void FormGudang::loadTabelGudang()
{
    tabelModel = new QSqlQueryModel(this);
    tabelModel->setQuery("SELECT * FROM gudang ORDER BY idgudang ASC");
    tabelModel->setHeaderData(0,Qt::Horizontal,QObject::tr("ID Gudang"));
    tabelModel->setHeaderData(1,Qt::Horizontal,QObject::tr("Alamat Gudang"));

    ui->tableGudang->setModel(tabelModel);
    ui->tableGudang->setColumnWidth(0,100);
    ui->tableGudang->setColumnWidth(1,100);
    ui->tableGudang->show();
}

FormGudang::~FormGudang()
{
    delete ui;
}

void FormGudang::on_pushButton_clicked()
{
    if(ui->idgudangLineEdit->text().isEmpty()){
        QMessageBox::information(this, "Warning","ID Gudang belum diisi");
        ui->idgudangLineEdit->setFocus();
    }else if (ui->alamatgudangLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Alamat Gudang belum diisi");
        ui->alamatgudangLineEdit->setFocus();
    }else{
        QSqlQuery duplicate;
        duplicate.prepare("SELECT * FROM gudang WHERE idgudang='"+ui->idgudangLineEdit->text()+"'");
        duplicate.exec();
        if(duplicate.next()){
            QMessageBox::information(this, "warning","ID Gudang sudah terdaftar");
            ui->alamatgudangLineEdit->setText(duplicate.value(1).toString());
        }else{
            QSqlQuery sql(koneksi);
            sql.prepare("INSERT INTO gudang (idgudang,alamatgudang)"
                        "VALUES(:idgudang,:alamatgudang)");
            sql.bindValue(":idgudang",ui->idgudangLineEdit->text());
            sql.bindValue(":alamatgudang",ui->alamatgudangLineEdit->text());

            if (sql.exec()){
                QMessageBox::information(this, "warning", "Data Berhasil Di Simpan");
            }else{
                qDebug()<<sql.lastError().text();
            }
        }
    }
}


void FormGudang::on_pushButton_2_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("UPDATE gudang SET alamatgudang=:alamatgudang where idgudang=:idgudang");
    sql.bindValue(":idgudang",ui->idgudangLineEdit->text());
    sql.bindValue(":alamatgudang",ui->alamatgudangLineEdit->text());

    if (sql.exec()){
        QMessageBox::information(this, "warning", "Data Berhasil Di Ubah");
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormGudang::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM gudang WHERE idgudang=:idgudang");
    sql.bindValue(":idgudang",ui->idgudangLineEdit->text());

    if (sql.exec()){
        QMessageBox::information(this, "warning", "Data Berhasil Di Hapus");
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormGudang::on_tableGudang_activated(const QModelIndex &index)
{
    int baris=ui->tableGudang->currentIndex().row();
    ui->idgudangLineEdit->setText(ui->tableGudang->model()->index(baris, 0).data().toString());
    ui->alamatgudangLineEdit->setText(ui->tableGudang->model()->index(baris, 1).data().toString());
}

