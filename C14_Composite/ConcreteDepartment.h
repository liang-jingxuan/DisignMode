#ifndef __CONCRETEDEPARTMENT__H__
#define __CONCRETEDEPARTMENT__H__
#include "ICompany.h"
class HRDepartment:public Company{
    public:
        HRDepartment(std::string name);
        void LineOfDuty();
        void Display(int);
    private:
        //部门以下不能是一个公司,所以不能被调用
        void Add(std::shared_ptr<Company>);
        void Remove(std::shared_ptr<Company>);
        //virtual void Add(Company*)override;
        //virtual void Remove (Company*) override;
};

class FinanceDepartment:public Company{
    public:
        FinanceDepartment(std::string name);
        void LineOfDuty() override;
        void Display(int) override;
    private://重写这些函数,但是不能被调用
        void Add(std::shared_ptr<Company>) override;
        void Remove(std::shared_ptr<Company>) override;
        //virtual void Add(Company*) override;
        //virtual void Remove (Company*) override;
};

#endif