#include "Factorys.hpp"
#include "Products.hpp"
using namespace std;
int main(){


    //品牌选择
    IFactory* factory = new TCLFactory();
    //IFactory* factory = new HAIRFactory();



    //生产产品
    IAirConditionary* IAC = factory->CreateAirConditionary();
    ITelevision* ITV = factory->CreateTelevision();
    IFridge* IF = factory->CreateFridge();
    IAC->Produce();
    ITV->Produce();
    IF->Produce();
}