#ifndef __AFTERNOON_HPP__
#define __AFTERNOON_HPP__

#include "IState.h"
#include "Work.h"
#include "memory"

class AfternoonState:public IState{
    public:
        virtual void WriteProgram(std::shared_ptr<Work> w) override;
};
#endif