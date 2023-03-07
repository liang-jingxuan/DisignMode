#include "ConcreteCountries.h"
#include "iostream"
#include "memory"
//                 USA
USA::USA(IUnitedNations* md):ICountries(md){}

void USA::Declare(std::string str){
    mediator->Declare(str,this);//告诉中介自己想说的话
}

void USA::GetMsg(std::string msg){
    std::cout<<"USA gets a message :"<<msg;
}

USA::USA(const USA& rhs):ICountries(rhs.mediator){

}
//                  Iraq
Iraq::Iraq(IUnitedNations* md):ICountries(md){}

Iraq::Iraq(const Iraq& rhs):ICountries(rhs.mediator){

}

void Iraq::Declare(std::string str){
    mediator->Declare(str,this);//告诉中介自己想说的话
}

void Iraq::GetMsg(std::string msg){
    std::cout<<"Iraq gets a message: "<<msg;
}