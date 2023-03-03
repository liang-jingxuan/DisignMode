#ifndef __COMMAND_H__
#define __COMMAND_H__
#include "memory"
#include "Barbecuer.h"

class Command{
    protected:
        std::shared_ptr<Barbecuer> CommandExcuter;
        static int TypeID;
    public:
        Command(std::shared_ptr<Barbecuer>);
        virtual void ExcuteCommand()=0;
        virtual int Typeinfo();
};

#endif