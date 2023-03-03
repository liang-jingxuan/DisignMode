#include "Manager.h"
Manager::Manager(std::string n):name(n){}

void Manager::SetSuperior(std::shared_ptr<Manager> sp){
    this->superior=sp;  
}