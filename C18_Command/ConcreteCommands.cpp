#include "ConcreteCommands.h"
//烤羊肉命令类
BakeMuttonCommand::BakeMuttonCommand(std::shared_ptr<Barbecuer> receiver)
        :Command(receiver){
}

void BakeMuttonCommand::ExcuteCommand(){
    CommandExcuter->BakeMutton();
}
int BakeMuttonCommand::Typeinfo(){
    return Type;
}
//烤鸡翅命令类
BakeChickenCommand::BakeChickenCommand(std::shared_ptr<Barbecuer> receiver)
        :Command(receiver){
}

void BakeChickenCommand::ExcuteCommand(){
    CommandExcuter->BakeChicken();
}

int BakeChickenCommand::Typeinfo(){
    return Type;
}