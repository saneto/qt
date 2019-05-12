#ifndef COURRIER_H
#define COURRIER_H
#include <QApplication>
#include <QTextEdit>
class Courrier
{
private:
    QString destinataire;
protected:
    float tarif;
    QTextEdit* mediaDistributeur;
public:
    Courrier(QTextEdit* fp,QString d);
    QString getDest();
    void virtual affranchir()=0;
    QString virtual envoyer()=0;
    QString virtual Info()=0;

};

#endif // COURRIER_H
