#ifndef __MANAGER_H__
#define __MANAGER_H__
#include "string"
#include "memory"
#include "Requests.h"
class Manager{
    protected:
        std::string name;
        std::shared_ptr<Manager> superior;//记录上级
    public:
        Manager(std::string);
        void SetSuperior(std::shared_ptr<Manager>);
        virtual void RequestApplications(std::shared_ptr<Requests>) = 0;
};

#endif