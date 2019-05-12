#include "tri.h"
#include "ui_tri.h"
#include <QApplication>
#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>
#include <QTextEdit>
#include "courrier.h"
Tri::Tri(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Tri)
{
    ui->setupUi(this);
    ui->textEdit->hide();
    ui->textEdit_2->hide();
    ui->textEdit_3->hide();
    ui->textEdit_4->hide();
    ui->label->hide();
    ui->label_2->hide();
    ui->label_3->hide();
    ui->label_4->hide();
    ui->pushButton_2->hide();
    ui->textEdit_5->hide();
    ui->pushButton->hide();
}

Tri::~Tri()
{
    delete ui;
}



void Tri::on_pushButton_2_clicked()
{
    Courrier *c;
    if(ui->comboBox->currentText()=="Paquet")
    {
        c=(Courrier*)(new PAQUET(ui->textEdit,ui->textEdit_2->toPlainText(),ui->textEdit_3->toPlainText(),ui->textEdit_4->toPlainText().toFloat() ));

    }
    else if(ui->comboBox->currentText()=="Lettre")
     {
       c=(Courrier*)(new LETTRE(ui->textEdit_5,ui->textEdit_2->toPlainText()));
    }
    c->affranchir();
    c->envoyer();
}

void Tri::on_comboBox_currentTextChanged(const QString &arg1)
{
    if(arg1=="Choisir votre type de courrier")
    {
        ui->textEdit->hide();
        ui->textEdit_2->hide();
        ui->textEdit_3->hide();
        ui->textEdit_4->hide();
        ui->label->hide();
        ui->label_2->hide();
        ui->label_3->hide();
        ui->label_4->hide();
        ui->pushButton_2->hide();
        ui->textEdit_5->hide();
        ui->pushButton->hide();
    }
    else if(arg1=="Paquet")
    {
        ui->pushButton->show();
        ui->textEdit_5->hide();
        ui->textEdit->show();
        ui->pushButton_2->show();
        ui->textEdit_2->show();
        ui->textEdit_3->show();
        ui->textEdit_4->show();
        ui->label_2->show();
        ui->label_3->show();
        ui->label->show();
        ui->label_4->show();
        ui->label_4->alignment();
        ui->label_5->setText("Société privée de distribution");

        ui->label_4->setText("");
    }else if(arg1=="Lettre")
    {
        ui->textEdit->hide();
        ui->pushButton_2->show();
        ui->label->show();
        ui->textEdit_5->show();
        ui->textEdit_2->show();
        ui->textEdit_3->hide();
        ui->textEdit_4->hide();
        ui->label_2->hide();
        ui->label_3->hide();
        ui->label_4->alignment();
        ui->label_4->setText("Facteur");
        ui->label_5->setText("");
    }
}

void Tri::on_pushButton_clicked()
{
    ui->textEdit_2->setText("");
    ui->textEdit_3->setText("");
    ui->textEdit_4->setText("");
}
