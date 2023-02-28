#include "ConcreteCompany.h"
#include "iostream"
#include "memory"
ConcreteCompany::ConcreteCompany(std::string name):Company(name){}

void ConcreteCompany::Add(std::shared_ptr<Company> comp){
    children.push_back(comp);
}

void ConcreteCompany::Remove(std::shared_ptr<Company> comp){
    children.remove(comp);
}
/*
void ConcreteCompany::Add(Company* comp){
    children.push_back(std::make_shared<Company>(comp));
}

void ConcreteCompany::Remove(Company* comp){
    children.push_back(std::make_shared<Company>(comp));
}
*/
void ConcreteCompany::Display(int depth){//展示公司的名下的部门和子公司结构
    for(int ix=0;ix<depth;++ix)
        std::cout<<"-";
    std::cout<<CompanyName<<std::endl;
    for(auto component:children){//遍历名下的所有子公司和部门的名字
        component->Display(depth+2);
        std::cout<<std::endl;
    }
}

void ConcreteCompany::LineOfDuty(){
    std::cout<<"\nCompany Name: "<<CompanyName<<std::endl;
    for(auto component:children){
        std::cout<<"Department Duty:";
        component->LineOfDuty();
    }
}