#include "IWeb.h"
#include "iostream"
UserInfo::UserInfo(std::string ownerName):owner(ownerName){}

std::string UserInfo::getOwnerName(){
    return  this->owner;
}