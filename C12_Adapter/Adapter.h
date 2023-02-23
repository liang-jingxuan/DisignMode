#ifndef __ADAPTER__H__
#define __ADAPTER__H__
#include "memory"
#include "Target.h"
#include "Adaptee.h"
class Adapter :public Target{
    private:
        std::shared_ptr<Adaptee> client;//为谁进行适配
    public:
        Adapter();
        virtual void English2Chinese();
};

#endif