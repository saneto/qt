
#include "paquet.h"
PAQUET::PAQUET(QTextEdit* fp,QString d,QString e, float p) :
    Courrier(fp ,d)
{
    poids=p;
    exp=e;

}
void PAQUET::affranchir()
{
    this->tarif=50*poids;
}

QString PAQUET::envoyer()
{
    //mediaDistributeur->append(this->Info());
    return 0;
}

QString PAQUET::Info()
{
    QString r,prix,p;
    prix.setNum(tarif,'f',2);
    p.setNum(poids,'f',2);
    r="Le destinataire   "+getDest()+"   poids:   "+p+"   prix:   "+prix;
    return r;
}

Courrier * fabriquePaquet(QTextEdit* fp,QString d,QString e,float p)
{
    Courrier*c;
   c=(Courrier*)(new PAQUET(fp,d,e,p));
    return c;
}

