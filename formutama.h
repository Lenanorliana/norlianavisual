#ifndef FORMUTAMA_H
#define FORMUTAMA_H

#include <QMainWindow>
#include <formbarang.h>
#include <formgudang.h>
#include <formklien.h>
#include <formpenawaran.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class FormUtama;
}
QT_END_NAMESPACE

class FormUtama : public QMainWindow
{
    Q_OBJECT

public:
    FormUtama(QWidget *parent = nullptr);
    ~FormUtama();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::FormUtama *ui;
    FormBarang *barang;
    FormGudang *gudang;
    FormKlien *klien;
    FormPenawaran *penawaran;

};
#endif // FORMUTAMA_H
