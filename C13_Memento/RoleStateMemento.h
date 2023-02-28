#ifndef __RoleStateMemento__H__
#define __RoleStateMemento__H__
//备份
class RoleStateMemento{
    private:
        int vit;
        int mana;
        int exp;
    public:
        RoleStateMemento(int,int,int);
        //void setVit(int);//不能修改备份的数据
        //void setMana(int);
        //void setExp(int);

        int getVit();//获取备份中的数据,供角色恢复原来数据
        int getMana();
        int getExp();
};

#endif