#ifndef FORMGUDANG_H
#define FORMGUDANG_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlQueryModel>

namespace Ui {
class FormGudang;
}

class FormGudang : public QWidget
{
    Q_OBJECT

public:
    explicit FormGudang(QWidget *parent = nullptr);
     void loadTabelGudang();
    ~FormGudang();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_tableGudang_activated(const QModelIndex &index);

private:
    Ui::FormGudang *ui;
    QSqlDatabase koneksi;
    QSqlQuery sql;
    QSqlQueryModel *tabelModel;
};

#endif // FORMGUDANG_H
