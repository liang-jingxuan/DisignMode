#ifndef __CONCRETECOMMONMANAGER_H__
#define __CONCRETECOMMONMANAGER_H__

#include "Manager.h"
#include "string"
#include "Requests.h"
class CommonManager:public Manager{//经理(CommonManager)  上级是总监(Majordomo)
    public:
        CommonManager(std::string);
        void RequestApplications(std::shared_ptr<Requests>) override;
};


class Majordomo:public Manager{//总监
    public:
        Majordomo(std::string);
        void RequestApplications(std::shared_ptr<Requests>) override;
};

class GeneralManager:public Manager{//总经理
    public:
        GeneralManager(std::string);
        void RequestApplications(std::shared_ptr<Requests>) override;
};
#endif