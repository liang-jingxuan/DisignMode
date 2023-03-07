#ifndef __ICOUNTRIES_H_
#define __ICOUNTRIES_H_
#include "memory"
class IUnitedNations;
class ICountries{
    protected:
        IUnitedNations* mediator;//国家之间需要一个中介进行沟通
    public:
        ICountries(IUnitedNations*);
        virtual ~ICountries();
};

#endif