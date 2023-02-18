#ifndef __PROXYMODE_HPP_
#define __PROXYMODE_HPP_
#include "string"
#include "iostream"
class Action{
    public:
        virtual void GiveDolls()=0; 

        virtual void GiveFlowers()=0; 

        virtual void GiveChocolate()=0; 
};

class BeautifulGirl{
    private:
        std::string name;
        
    public:
        std::string getName(){
            return name;
        }
        BeautifulGirl()=delete;
        BeautifulGirl(std::string n):name(n){}
};

class Pursuit : public Action{//被代理的主体
    BeautifulGirl* mm;
    public:
        Pursuit(BeautifulGirl mmName):mm(new BeautifulGirl(mmName)){}
        void GiveDolls(){
            std::cout<<mm->getName()<<"This doll is for you!"<<std::endl;
        }

        void GiveFlowers(){
            std::cout<<mm->getName()<<"These flowers are for you!"<<std::endl;
        }

        void GiveChocolate(){
            std::cout<<mm->getName()<<"These chocolate are for you!"<<std::endl;
        }
};

class Proxy : public Action{//代理人
    Pursuit* client;//被代理的人,客户
    public:
        Proxy(BeautifulGirl mmName):client(new Pursuit(mmName)){}

        void GiveDolls(){
            client->GiveDolls();//代理人转调用,实际是被代理的人完成
        }

        void GiveFlowers(){
            client->GiveFlowers();
        }

        void GiveChocolate(){
            client->GiveChocolate();
        }
};

#endif