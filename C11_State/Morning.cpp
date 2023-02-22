#include "Afternoon.h"
//#include "IState.h"//不用引用，因为Morning.h已经引用了
#include "Morning.h"
void MorningState::WriteProgram(shared_ptr<Work> w)
{
    if (w->getHour() < 12)
    {
        std::cout << "It is morning " << w->getHour() << std::endl;
    }
    else
    {
        w->setState(make_shared<AfternoonState>());
        w->WhatToDo();
    }
}