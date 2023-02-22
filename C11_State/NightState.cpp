
//#include "IState.h" //这里不用引用IState.h，因为NightState.h已经引用了
//#include "Work.h"   //这里不用引用Work.h，因为NightState.h已经引用了
#include "GoHome.h"
#include "NightState.h"

void NightState::WriteProgram(shared_ptr<Work> w)
{
    if (true == w->getTaskState())
    {
        std::cout << "Job is done! It is time for home!" << std::endl;
        w->setState(make_shared<GoHome>());
        w->WhatToDo();
    }
    else
    {
        if (w->getHour() < 22)
        {
            std::cout << "T.T , It is " << w->getHour() << "now. T.T , Work overtime!" << std::endl;
        }
        else
        {
            w->setState(make_shared<GoHome>());
            w->WhatToDo();
        }
    }
}
