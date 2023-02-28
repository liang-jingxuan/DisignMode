#include "Player.h"
#include "iostream"
using namespace std;
Player::Player(int v,int m,int e):vit(v),mana(m),exp(e){

}
void Player::subNature(int x,int y, int z){
    vit+=x;
    mana+=y;
    exp+=z;
}
void Player::showState(){
    cout<<"vit: "<<vit<<endl
        <<"mana: "<<mana<<endl
        <<"exp: "<<exp<<endl;
}

shared_ptr<RoleStateMemento> Player::SaveState(){
    return make_shared<RoleStateMemento>(vit,mana,exp);
}

void Player::RecoveryState(shared_ptr<RoleStateMemento> memento){//参数是要调用的备份
    this->vit = memento->getVit();
    this->mana = memento->getMana();
    this->exp = memento->getExp();
}

int Player::getExp(){ return exp;}
int Player::getMana(){return mana;}
int Player::getVit(){return vit;}