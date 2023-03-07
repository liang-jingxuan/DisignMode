#include "ConcreteUnitedNations.h"
#include "iostream"
UnitedNationsSecurityCouncil::UnitedNationsSecurityCouncil(){

}

void UnitedNationsSecurityCouncil::Declare( std::string context ,
                                ICountries* src){
    if(colleage1==src){
        colleage2->GetMsg(context);//对方收信
    }
    else if(colleage2==src){
        colleage1->GetMsg(context);
    }
}

void UnitedNationsSecurityCouncil::setUSAandIraq(USA* cnt1,
                                Iraq* cnt2){
    colleage1 = cnt1;//基类转子类
    if(cnt1==colleage1) 
        std::cout<<"cnt1==colloeage1"<<std::endl;
    colleage2 = cnt2; //基类转子类
}
