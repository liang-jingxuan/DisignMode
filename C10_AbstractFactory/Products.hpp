#ifndef __PRODUCTS__HPP__
#define __PRODUCTS__HPP__
#include "iostream"
using namespace std;
//这个文件存储了所有产品
//抽象产品
class IAirConditionary{
    public:
        virtual void Produce(){
            cout<<"General air conditionary"<<endl;
        }
};
class ITelevision{
    public:
        virtual void Produce(){
            cout<<"General television"<<endl;
        }
};

class IFridge{//冰箱
    public:
        virtual void Produce(){
            cout<<"General fridge"<<endl;
        }
};
//具体产品
//海尔所拥有的的产品
class HAIRAirConditionary: public IAirConditionary{//海尔牌的空调
    public:
        void Produce(){
            cout<<"HAIR air conditionary"<<endl;
        }
};

class HAIRFridge:public IFridge{
    public:
        void Produce(){
            cout<<"HAIR fridge"<<endl;
        }
};

class HAIRTelevision: public ITelevision{//海尔牌的电视
    public:
        void Produce(){
            cout<<"HAIR Television"<<endl;
        }
};

//TCL所拥有的的产品
class TCLAirConditionary: public IAirConditionary{//TCL牌的空调
    public:
        void Produce(){
            cout<<"TCL air conditionary"<<endl;
        }
};

class TCLTelevision:public ITelevision{//TCL牌的电视
    public:
        void Produce(){
            cout<<"TCL Television"<<endl;
        }
};



#endif