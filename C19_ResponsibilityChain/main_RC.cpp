#include "ConcreteManager.h"
#include "Requests.h"
#include "memory"
int main(){
    std::shared_ptr<CommonManager> jingli(new CommonManager("jingli"));
    std::shared_ptr<Majordomo> zongjian(new Majordomo("zongjian"));
    std::shared_ptr<GeneralManager> zongjingli(new GeneralManager("zongjingli"));
    
    jingli->SetSuperior(zongjian);
    zongjian->SetSuperior(zongjingli);

    Requests myrq1;
    myrq1.t=WhatRequest::JiaXin;
    myrq1.why="I want more salary!";
    myrq1.num=1010;
    jingli->RequestApplications(std::make_shared<Requests>(myrq1));
}