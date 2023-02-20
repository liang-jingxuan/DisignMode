#ifndef __FACTORYS_HPP__
#define __FACTORYS_HPP__
#include "HairProducts.hpp"
#include "TCLProducts.hpp"
#include "Products.hpp"
class IFactory{
    public:
        virtual IAirConditionary* CreateAirConditionary()=0;//创建工厂用于生产某一产品组的产品
        virtual ITelevision*  CreateTelevision()=0;
        virtual IFridge* CreateFridge()=0;
};

class HAIRFactory:public IFactory{//海尔品牌
    public:
        IAirConditionary* CreateAirConditionary(){
            IAirConditionary* res = new HAIRAirConditionary();
            return res;
        }

        ITelevision* CreateTelevision(){
            ITelevision* res = new HAIRTelevision();
            return res;
        }

        IFridge* CreateFridge(){
            IFridge* res = new HAIRFridge();
            return res;
        }
};

class TCLFactory:public IFactory{//TCL品牌
    public:
        IAirConditionary* CreateAirConditionary(){
            IAirConditionary* res = new TCLAirConditionary();
            return res;
        }

        ITelevision* CreateTelevision(){
            ITelevision* res = new TCLTelevision();
            return res;
        }
        
        IFridge* CreateFridge(){

        }
};

#endif