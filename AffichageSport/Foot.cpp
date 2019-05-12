#include "Foot.h"
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
Foot::Foot(const char* nom,int score):Score(nom,score)
{

}
Foot::~Foot()
{

}
void Foot::but()
{
    Score::setscore(1);
}
void Foot::affich()
{
    Score::affichescore();
}
char * Foot::serialize()
{
    char *ret=Score::serialize();
    return ret;
}
