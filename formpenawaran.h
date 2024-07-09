#ifndef FORMPENAWARAN_H
#define FORMPENAWARAN_H

#include <QWidget>
#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlQueryModel>

namespace Ui {
class FormPenawaran;
}

class FormPenawaran : public QWidget
{
    Q_OBJECT

public:
    explicit FormPenawaran(QWidget *parent = nullptr);
    void loadTabelPenawaran();
    ~FormPenawaran();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_tablePenawaran_activated(const QModelIndex &index);

private:
    Ui::FormPenawaran *ui;
    QSqlDatabase koneksi;
    QSqlQuery sql;
    QSqlQueryModel *tabelModel;
};

#endif // FORMPENAWARAN_H
