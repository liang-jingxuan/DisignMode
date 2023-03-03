#ifndef __CONCRETECOMMANDS_H__
#define __CONCRETECOMMANDS_H__
#include "Command.h"
#include "Barbecuer.h"
class BakeMuttonCommand:public Command{//烤羊肉命令

    public:
        enum {Type=1};
        BakeMuttonCommand(std::shared_ptr<Barbecuer>);
        virtual void ExcuteCommand() override;
        int Typeinfo();
};

class BakeChickenCommand:public Command{//烤鸡翅命令
    public:
        enum{Type=2};
        BakeChickenCommand(std::shared_ptr<Barbecuer>);
        virtual void ExcuteCommand() override;
        int Typeinfo();
};

#endif