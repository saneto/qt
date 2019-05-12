#ifndef LETTRE_H
#define LETTRE_H
#include"courrier.h"
class LETTRE : public Courrier
{
public:
    LETTRE(QTextEdit* fp,QString d);
    void affranchir();
    QString envoyer();
    QString Info();
    Courrier*fabriqueLettre(QTextEdit* fp,QString dest);
};

#endif // LETTRE_H
