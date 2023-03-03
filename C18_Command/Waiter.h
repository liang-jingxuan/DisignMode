#ifndef __WAITER_H__
#define __WAITER_H__
#include "list"
#include "Command.h"
#include "memory"
class Waiter{
    private:
        std::list<std::shared_ptr<Command>> orders;
    public:
        void SetOrder(std::shared_ptr<Command>);
        void CancelOrder(std::shared_ptr<Command>);
        void Notify();
};


#endif