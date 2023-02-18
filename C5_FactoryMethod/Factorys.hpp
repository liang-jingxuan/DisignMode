#ifndef __FACTORYS_HPP__
#define __FACTORYS_HPP__
#include "Operations.hpp"
class IFactory{
    public:
        virtual void CreateOperation(Operations* &op)=0;

};


class AddFactory:public IFactory{

    public:
        void CreateOperation(Operations* &op){
            op = new AddOperation();
        }
};

class SubFactory:public IFactory{

    public:
        void CreateOperation(Operations* &op){
            op = new SubOperation();
        }
};
#endif