#ifndef __CONCRETEMOBILEBRAND_H__
#define __CONCRETEMOBILEBRAND_H__
#include "MobileBrand.h"
class HuaWei : public MobileBrand{
    public:
        void Run() override;
};

class XiaoMi:public MobileBrand{
    public:
        void Run() override;
};

#endif