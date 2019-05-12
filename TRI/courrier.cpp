#include "courrier.h"

Courrier::Courrier(QTextEdit* fp,QString d)
{
    destinataire=d;
    mediaDistributeur=fp;
}
QString Courrier::getDest()
{
    return destinataire;
}
void Courrier::affranchir()
{

}
