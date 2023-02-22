#ifndef __NIGHTSTATE_HPP__
#define __NIGHTSTATE_HPP__
#include "IState.h"
#include "Work.h"

class NightState:public IState{
    public:
        virtual void WriteProgram(shared_ptr<Work> w) override;
};

#endif