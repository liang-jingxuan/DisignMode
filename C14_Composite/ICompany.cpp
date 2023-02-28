#include "ICompany.h"

Company::Company(std::string name):CompanyName(name){}
Company::Company(const Company& rhs):CompanyName(rhs.CompanyName){

}