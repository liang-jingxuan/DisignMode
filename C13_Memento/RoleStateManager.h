#ifndef __ROLESTATEMANAGER__H__
#define __ROLESTATEMANAGER__H__
#include "RoleStateMemento.h"
#include "memory"
using std::shared_ptr;
//备份管理员
class RoleStateManager{
    private:
        shared_ptr<RoleStateMemento> manager;//管理的备份 (1份)
    public:
        void setMemento(shared_ptr<RoleStateMemento>);//参数是要保存的备份的去处
        shared_ptr<RoleStateMemento> getMemento();//获取备份资料

        RoleStateManager()=delete;
        RoleStateManager(shared_ptr<RoleStateMemento>);

};

#endif