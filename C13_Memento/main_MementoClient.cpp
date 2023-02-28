#include "Player.h"
#include "RoleStateManager.h"
#include "RoleStateMemento.h"
#include "memory"
using namespace std;
int main(){
    shared_ptr<Player> qiyu = make_shared<Player>(100,100,100);//创建游戏角色
    qiyu->showState();



    shared_ptr<RoleStateManager> stateAdmin1 //创建备份1
            = make_shared<RoleStateManager>(make_shared<RoleStateMemento>(qiyu->getVit(),qiyu->getMana(),qiyu->getExp()));
    
    qiyu->subNature(-50,-50,50);//血量降低50,蓝量降低50,经验增加50
    shared_ptr<RoleStateManager> stateAdmin2 //创建备份2
            = make_shared<RoleStateManager>(make_shared<RoleStateMemento>(qiyu->getVit(),qiyu->getMana(),qiyu->getExp()));
    //stateAdmin1->setMemento(stateAdmin2->getMemento());//用备份2覆盖备份1
    qiyu->showState();

    qiyu->RecoveryState(stateAdmin1->getMemento());//调出备份1
    qiyu->showState();

    qiyu->RecoveryState(stateAdmin2->getMemento());//调出备份2
    qiyu->showState();
}