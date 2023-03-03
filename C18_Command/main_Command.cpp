#include "Barbecuer.h"
#include "Waiter.h"
#include "ConcreteCommands.h"
#include "memory"
int main(){
    std::shared_ptr<Barbecuer>  cocker(new Barbecuer());
    
    std::shared_ptr<Command>    cmd1(new BakeChickenCommand(cocker));//
    std::shared_ptr<Command>    cmd2(new BakeMuttonCommand(cocker));//
    std::shared_ptr<Waiter>     xiaoer(new Waiter());

    xiaoer->SetOrder(cmd1);
    xiaoer->SetOrder(cmd2);

    xiaoer->Notify();
}