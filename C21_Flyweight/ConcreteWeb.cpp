#include "ConcreteWeb.h"
#include "iostream"
ConcreteWeb::ConcreteWeb(std::string brandName):brand(brandName){}

void  ConcreteWeb::Use(UserInfo* u){
    std::cout<<"Web brand "<<brand<<", owner name:"<<u->getOwnerName()<<std::endl;
}
