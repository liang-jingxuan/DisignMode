#ifndef __I_UNITEDNATIONS_H_
#define __I_UNITEDNATIONS_H_

#include "string"
#include "memory"
//#include "ICoundtries.h"
class ICountries;
class IUnitedNations{
    public:
        virtual void Declare(std::string ,ICountries*)=0;
                            //声明的内容   //声明的发起方
};

#endif