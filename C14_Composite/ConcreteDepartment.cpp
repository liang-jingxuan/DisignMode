#include "ConcreteDepartment.h"
#include "iostream"
//HR部门
HRDepartment::HRDepartment(std::string name):Company(name){}

void HRDepartment::Add(std::shared_ptr<Company>){}

void HRDepartment::Remove(std::shared_ptr<Company>){}

//void HRDepartment::Add(Company* ){}

//void HRDepartment::Remove(Company* ){}

void HRDepartment::Display(int depth){
    for(int ix=0;ix<depth;++ix)
        std::cout<<"-";
    std::cout<<CompanyName;
}

void HRDepartment::LineOfDuty(){
    std::cout<<"This is HR department, named as "
            <<CompanyName
            <<std::endl;
}

//财务部分
FinanceDepartment::FinanceDepartment(std::string name):Company(name){}

void FinanceDepartment::Add(std::shared_ptr<Company>){}

void FinanceDepartment::Remove(std::shared_ptr<Company>){}

//void FinanceDepartment::Add(Company* ){}

//void FinanceDepartment::Remove(Company* ){}

void FinanceDepartment::Display(int depth){
    for(int ix=0;ix<depth;++ix)
        std::cout<<"-";
    std::cout<<CompanyName<<std::endl;
}

void FinanceDepartment::LineOfDuty(){
    std::cout<<"This is finance Department, named as "
            <<CompanyName
            <<std::endl;
}
