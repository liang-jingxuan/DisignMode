#ifndef __MOBILEBRAND_H__
#define __MOBILEBRAND_H__
#include "memory"
#include "MobileSoft.h"
class MobileBrand{
    protected:
        std::shared_ptr<MobileSoft> soft;
    public:
        void setMobileSoft(std::shared_ptr<MobileSoft> soft);
        virtual void Run()=0;
};

#endif