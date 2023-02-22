#ifndef __MORNING_HPP
#define __MORNING_HPP

#include "IState.h"
#include "Work.h"

class MorningState:public IState{
    public:
        virtual void WriteProgram(shared_ptr<Work> w) override;
};


#endif