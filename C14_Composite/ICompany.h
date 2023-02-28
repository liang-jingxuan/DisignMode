#ifndef __ICOMPANY__H__
#define __ICOMPANY__H__
#include "string"
#include "memory"
class Company{//是一个抽象类
    protected:
        std::string CompanyName;
    public:
        Company (std::string name);
        Company (const Company&);
        virtual void Add(std::shared_ptr<Company>) = 0;
        virtual void Remove (std::shared_ptr<Company>) = 0;
        
        //virtual void Add(Company*) = 0;
        //virtual void Remove (Company*) = 0;
        
        virtual void Display(int depth) = 0;
        virtual void LineOfDuty() = 0;//职责
};



#endif