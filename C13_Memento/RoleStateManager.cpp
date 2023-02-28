/*
class RoleStateManager{
    private:
        shared_ptr<RoleStateMemento> manager;
    public:
        void setMemento()
};
*/
#include "RoleStateManager.h"
using namespace std;
RoleStateManager::RoleStateManager(shared_ptr<RoleStateMemento> admin)
            :manager(make_shared<RoleStateMemento>(admin->getVit(),admin->getMana(),admin->getExp())){

}
void RoleStateManager::setMemento(shared_ptr<RoleStateMemento> memento){
    manager = memento;
}

shared_ptr<RoleStateMemento> RoleStateManager::getMemento(){
    return manager;
}