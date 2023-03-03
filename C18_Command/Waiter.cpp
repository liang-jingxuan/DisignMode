#include "Waiter.h"
#include "ConcreteCommands.h"
#include "iostream"
void Waiter::SetOrder(std::shared_ptr<Command> cmd){
    if(cmd->Typeinfo()==BakeChickenCommand::Type){
        std::cout<<"There is no chicken~!"<<std::endl;
    }
    else if (cmd->Typeinfo()==BakeMuttonCommand::Type){
        std::cout<<"Mutton +1"<<std::endl;
        orders.push_back(cmd);
    }
}

void Waiter::CancelOrder(std::shared_ptr<Command> cmd){
    orders.remove(cmd);
}

void Waiter::Notify(){
    for(auto cmd:orders){
        cmd->ExcuteCommand();
    }
}
