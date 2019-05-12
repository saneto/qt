#include "lettre.h"
#include <QApplication>
LETTRE::LETTRE(QTextEdit* fp,QString d) :
    Courrier(fp,d)
{
}
Courrier* fabriqueLettre(QTextEdit* fp,QString d)
{
    Courrier*c=(Courrier*)(new LETTRE(fp,d));
    return c;
}
void LETTRE::affranchir()
{
    this->tarif=1.5;
}

QString LETTRE::envoyer()
{
    mediaDistributeur->append(this->Info());
    return 0;
}
QString LETTRE::Info()
{
    QString r,prix;
    prix.setNum(tarif,'f',2);
    r="Le destinataire   "+getDest()+"   prix:   "+prix;
    return r;
}
