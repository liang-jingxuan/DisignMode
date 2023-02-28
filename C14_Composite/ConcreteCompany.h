#ifndef __CONCRETECOMPANY__H__
#define __CONCRETECOMPANY__H__
#include "ICompany.h"
#include "list"
class ConcreteCompany:public Company{
    private:
        std::list<std::shared_ptr<Company>> children;//存储公司名下的部门或子公司
    public:
        ConcreteCompany(std::string name);
        void Add(std::shared_ptr<Company>) override;//增加部门或子公司
        void Remove(std::shared_ptr<Company>) override;//去除部门或子公司
        //void Add(Company*) override;//增加部门或子公司
        //void Remove(Company*) override;//去除部门或子公司

        void Display(int) override;//展示
        void LineOfDuty() override;
};


#endif