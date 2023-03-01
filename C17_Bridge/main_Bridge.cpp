#include "ConcreteMobileBrand.h"
#include "ConcreteMobileSoft.h"
#include "memory"
int main(){
    std::shared_ptr<MobileBrand> myHuawei(std::make_shared<HuaWei>());
    myHuawei->setMobileSoft(std::make_shared<MobileAddressBook>());
    myHuawei->Run();
    
    myHuawei->setMobileSoft(std::make_shared<MobileGame>());
    myHuawei->Run();

    std::shared_ptr<MobileBrand> myXiaomi(std::make_shared<XiaoMi>());
    myXiaomi->setMobileSoft(std::make_shared<MobileGame>());
    myXiaomi->Run();
}