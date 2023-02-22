
#ifndef __GOHOME_HPP__
#define __GOHOME_HPP__
#include "IState.h"
#include "Work.h"

class GoHome : public IState{
    public:
        virtual void WriteProgram(shared_ptr<Work> w) override;
};

#endif