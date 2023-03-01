#ifndef __CONCRETEMOBILESOFT__H__
#define __CONCRETEMOBILESOFT__H__
#include "MobileSoft.h"
class MobileGame:public MobileSoft{//移动游戏
    public:
        void Run() override;
};

class MobileAddressBook:public MobileSoft{//通讯录类
    public:
        void Run() override;
};
#endif