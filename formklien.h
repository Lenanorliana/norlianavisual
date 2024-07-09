#ifndef FORMKLIEN_H
#define FORMKLIEN_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlQueryModel>

namespace Ui {
class FormKlien;
}

class FormKlien : public QWidget
{
    Q_OBJECT

public:
    explicit FormKlien(QWidget *parent = nullptr);
    void loadTabelKlien();
    ~FormKlien();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_tableKlien_activated(const QModelIndex &index);

private:
    Ui::FormKlien *ui;
    QSqlDatabase koneksi;
    QSqlQuery sql;
    QSqlQueryModel *tabelModel;
};

#endif // FORMKLIEN_H
