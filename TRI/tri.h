#ifndef TRI_H
#define TRI_H
#include <QApplication>
#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>
#include "lettre.h"
#include "paquet.h"
namespace Ui {
class Tri;
}

class Tri : public QMainWindow
{
    Q_OBJECT

public:
    explicit Tri(QWidget *parent = 0);
    ~Tri();
    void on_b1_clicked();
    void on_cb1_currendTextChanged(QString arg1);
    void on_pushButton_clicked();
private slots:

    void on_pushButton_2_clicked();

    void on_comboBox_currentTextChanged(const QString &arg1);

private:
    Ui::Tri *ui;
};

#endif // TRI_H


