#ifndef __CONCRETEUNITEDNATIONS_H_
#define __CONCRETEUNITEDNATIONS_H_
#include "ConcreteCountries.h"
#include "IUnitedNations.h"
#include "memory"
class UnitedNationsSecurityCouncil:public IUnitedNations{
    private:
        USA* colleage1;
        Iraq* colleage2;
    public:
        UnitedNationsSecurityCouncil();
        void setUSAandIraq(USA*, Iraq*);
        void Declare(std::string,ICountries*);//(内容,发送方)

};

#endif