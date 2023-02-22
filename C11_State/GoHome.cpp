
// #include "IState.hpp"
// #include "Work.hpp"
#include "GoHome.h"

void GoHome::WriteProgram(shared_ptr<Work> w)
{
    std::cout << "It is " << w.get()->getHour() << " now!";
    if (true == w->getTaskState())
    {
        std::cout << "Jobs is done! Sleep at ease! zzzzzzzz" << std::endl;
    }
    else
    {
        std::cout << "Jobs is not done! But it is time to go home for sleeping! zzzzzz" << std::endl;
    }
}
