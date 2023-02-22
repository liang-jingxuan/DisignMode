#ifndef __STATEPARTTEN__HPP__
#define __STATEPARTTEN__HPP__
#include "iostream"
#include <memory>
using namespace std;
class Work;
//-------------------------------抽象状态-------------------------------
class IState{
    public:
        IState();
        virtual void WriteProgram(shared_ptr<Work> w) = 0;
};

#endif