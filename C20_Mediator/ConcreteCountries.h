#ifndef __CONCRETECOUNTRIES__H__
#define __CONCRETECOUNTRIES__H__
#include "ICoundtries.h"
#include "string"
#include "IUnitedNations.h"

//美国

class USA :public ICountries{
    public:
        USA(IUnitedNations*);
        USA(const USA&);
        void Declare(std::string);
        void GetMsg(std::string);
};

//伊拉克

class Iraq :public ICountries{
    public:
        Iraq(IUnitedNations*);
        Iraq(const Iraq&);
        void Declare(std::string);
        void GetMsg(std::string);
};
#endif