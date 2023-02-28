#ifndef __PLAYER__H__
#define __PLAYER__H__
#include "RoleStateMemento.h"
#include "memory"
using std::shared_ptr;
class RoleStateMemento;
class Player{
    private:
        int vit;//生命值
        int mana;//魔力值
        int exp;//经验值

    public:
        Player()=delete;
        Player(int,int,int);
        void subNature(int,int,int);
        void showState();
        shared_ptr<RoleStateMemento> SaveState();//保存状态,进行备份.返回参数即要保存的备份名
        void RecoveryState(shared_ptr<RoleStateMemento> mememto);//选择调用哪个备份
        int getExp();
        int getMana();
        int getVit();
};


#endif