#ifndef __FACTORYS_HPP__
#define __FACTORYS_HPP__
#include "Operations.hpp"
#include "iostream"
class IFactory{
    public:
        virtual void CreateOperation(Operations* &op)=0;
        virtual Operations* CreateOperation()=0;
};


class AddFactory:public IFactory{

    public:
        Operations* CreateOperation(){
            Operations* op = new AddOperation();
            return op;
        }

        void CreateOperation(Operations* &op){
            op = new AddOperation();
        }
};

class SubFactory:public IFactory{

    public:
        void CreateOperation(Operations* &op){
            op = new SubOperation();
        }

        Operations* CreateOperation(){
            Operations* op = new SubOperation();
            return op;
        }
};
#endif