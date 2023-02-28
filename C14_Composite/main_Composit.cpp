#include "ConcreteCompany.h"
#include "ConcreteDepartment.h"
#include "ICompany.h"
#include "memory"
#include "iostream"
using namespace std;

int main(){
    std::shared_ptr<Company> headOffice(new ConcreteCompany("PeKing Company"));//总公司
    headOffice->Add(std::make_shared<HRDepartment>("PeKing Company's HR department"));
    headOffice->Add(std::make_shared<FinanceDepartment>("PeKing Company's Finance department"));

    std::shared_ptr<Company> ShangHaiBranchOffice(new ConcreteCompany("ShangHai Branch Office"));
    ShangHaiBranchOffice->Add(std::make_shared<HRDepartment>("ShangHai Branch Office's HR Department"));
    ShangHaiBranchOffice->Add(std::make_shared<FinanceDepartment>("ShangHai Branch Office's Finance Department"));
    headOffice->Add(ShangHaiBranchOffice);
    
    std::shared_ptr<Company> GuangDongBranchOffice(new ConcreteCompany("GuangDong Branch Office"));
    GuangDongBranchOffice->Add(std::make_shared<HRDepartment>("GuangDong Branch Office's HR Department"));
    GuangDongBranchOffice->Add(std::make_shared<FinanceDepartment>("GuangDong Branch Office's Finance Department"));
    headOffice->Add(GuangDongBranchOffice);

    std::shared_ptr<Company> GuangZhouOffice(new ConcreteCompany("GuangZhou Office"));
    GuangZhouOffice->Add(std::make_shared<HRDepartment>("GuangZhou Office's HR Department"));
    GuangZhouOffice->Add(std::make_shared<FinanceDepartment>("GuangZhou Office's Finance Department"));
    GuangDongBranchOffice->Add(GuangZhouOffice);
    

    cout<<"\n Structure "<<endl;
    headOffice->Display(0);

    cout<<"\n Duty"<<endl;
    headOffice->LineOfDuty();
}