#ifndef PAQUET_H
#define PAQUET_H
#include"courrier.h"

class PAQUET: public Courrier
{
private:
    float poids;
    QString exp;
public :
    PAQUET(QTextEdit* fp,QString d,QString e, float p);
    void affranchir();
    QString envoyer();
    QString Info();
    Courrier*fabriquePaquet(QTextEdit* fp,QString d,QString e=" ",float p=0.0);
};

#endif // PAQUET_H
