#ifndef __IWEB_H__
#define __IWEB_H__
#include "string"
class UserInfo{
    private:
        std::string owner;
    public:
        UserInfo(std::string);
        std::string getOwnerName();
};

class IWeb{
    public:
        virtual void Use(UserInfo*)=0;

};

#endif