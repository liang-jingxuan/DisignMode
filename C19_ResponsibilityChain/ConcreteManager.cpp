#include "ConcreteManager.h"
#include "iostream"
//                      经理 CommonManager 可以处理2天内的请假
CommonManager::CommonManager(std::string n):Manager(n){}

void CommonManager::RequestApplications(std::shared_ptr<Requests> rq){
    if(rq.get()->t == QingJia && rq->num<=2){
        std::cout<<"CommonManager: "<<rq->why<<" num "<<rq->num<<" allowed"<<std::endl;
    }
    else{
        if(superior!=nullptr){
            std::cout<<"CommonManager: I don't have enough authority, ask my superior"
                     <<std::endl;
            superior->RequestApplications(rq);
        }
            
    }
}


//                      总监 Majordomo 可以处理5天内的请假

Majordomo::Majordomo(std::string n):Manager(n){}

void Majordomo::RequestApplications(std::shared_ptr<Requests> rq){
    if(rq.get()->t == QingJia && rq->num<=5){
        std::cout<<"Majordomo: "<<rq->why<<" num "<<rq->num<<" allowed"<<std::endl;
    }
    else{
        if(superior!=nullptr){
            std::cout<<"Majordomo: I don't have enough authority, ask my superior"
                     <<std::endl;
            superior->RequestApplications(rq);
        }
            
    }
}


//          总经理 GeneralManager 可以处理任意时长的请假和1000以下加薪

GeneralManager::GeneralManager(std::string n):Manager(n){}

void GeneralManager::RequestApplications(std::shared_ptr<Requests> rq){
    if(rq.get()->t == JiaXin && rq->num<=1000){
        std::cout<<"GeneralManager: "<<rq->why<<" num "<<rq->num<<" allowed"<<std::endl;
    }
    else if(rq.get()->t == QingJia){
        std::cout<<"GeneralManager: "<<rq->why<<" num "<<rq->num<<" allowed"<<std::endl;
    }
    else{
        std::cout<<"GeneralManager: "<<rq->why<<" num "<<rq->num<<" rejected"<<std::endl;
    }
}