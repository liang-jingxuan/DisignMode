/*
class RoleStateMemento{
    private:
        int vit;
        int mana;
        int exp;
    public:
        RoleStateMemento(int,int,int);
        void setVit(int);
        void setMana(int);
        void setExp(int);
        int getVit();
        int getMane();
        int getExp();
};
*/
#include "RoleStateMemento.h"
using namespace std;
RoleStateMemento::RoleStateMemento(int vit,int mana,int exp):vit(vit),mana(mana),exp(exp){}


int RoleStateMemento::getExp(){ return exp;}
int RoleStateMemento::getMana(){return mana;}
int RoleStateMemento::getVit(){return vit;}
/*
void RoleStateMemento::setExp(int exp){this->exp = exp;}
void RoleStateMemento::setVit(int vit){this->vit = vit;}
void RoleStateMemento::setMana(int exp){this->exp = exp;}
*/