#ifndef __CHESSINFO_H__
#define __CHESSINFO_H__
#include "IWeb.h"
//              共享的部分
// 每个网站构成一样,只是URL不同

class ConcreteWeb:public IWeb{
    private:
        std::string brand;//网站类型
    public:
        ConcreteWeb(std::string);
        void  Use(UserInfo*) override;
};

#endif

