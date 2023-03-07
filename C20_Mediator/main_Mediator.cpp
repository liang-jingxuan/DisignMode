#include "ConcreteCountries.h"
#include "ConcreteUnitedNations.h"
#include "memory"
void main1(){
    std::shared_ptr<UnitedNationsSecurityCouncil> UNSC =
        std::make_shared<UnitedNationsSecurityCouncil>();

    std::shared_ptr<USA> America (new USA(UNSC.get()));
    std::shared_ptr<Iraq> IRAQ (new Iraq(UNSC.get()));

    UNSC->setUSAandIraq(America.get(),IRAQ.get());

    America->Declare("This is America!");
    IRAQ->Declare("This is Iraq!");
}
#include "iostream"
class BASE{
    public:
        BASE(){
            std::cout<<"BASE"<<std::endl;
            
        }
        virtual ~BASE(){
            std::cout<<"Distruct BASE"<<std::endl;
        }
};
class DERIVED : public BASE{
    public:
        DERIVED():BASE(){
            std::cout<<"DERIVED"<<std::endl;
        }

        virtual ~DERIVED(){
            std::cout<<"Distruct DERIVED"<<std::endl;
        }
};
void main2(){
    std::shared_ptr<BASE> pA (new DERIVED());
    std::shared_ptr<DERIVED> pB  = std::dynamic_pointer_cast<DERIVED>(pA); 

    if(pA==pB){
        std::cout<<"1"<<std::endl;
    }
    else if(pA.get()==pB.get()){
        std::cout<<"2"<<std::endl;
    }
}
int main(){
    main1();

}