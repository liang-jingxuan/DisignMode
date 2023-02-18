#ifndef __BUILDER__HPP__
#define __BUILDER__HPP__
#include "vector"
#include "string"
#include "iostream"
using namespace std;

class Account{
    private:
        vector<string> parts;//账号 密码 昵称 姓名 身份证 
        const vector<string> nature;

    public:
        Account():parts(vector<string>()),
                nature({"account","password","nickname","name","id"}){}

        void Add(string p){
            parts.push_back(p);
        }

        void show(){
            for(int ix=0;ix<5;++ix){
                cout<<nature[ix]<<":"<<parts[ix]<<endl;
            }
        }

};

class Builder{
    public:
        virtual void  Fillaccount()=0;
        virtual void  Fillpassword()=0;
        virtual void  Fillnickname()=0;
        virtual void  Fillname()=0;
        virtual void  Fillid()=0;
        virtual Account*& DeliverAccount()=0;
};

class concreteBuilder:public Builder{
    private:
        Account* myAcc;
    public:
        Account*& DeliverAccount(){
            return myAcc;
        }
        
        concreteBuilder():myAcc(new Account()){}
        
        void Fillaccount(){
            string acc;
            cin>>acc;cout<<endl;
            myAcc->Add(acc);
        }

        void Fillpassword(){
            string psw;
            cin>>psw;cout<<endl;
            myAcc->Add(psw);
        }

        void Fillnickname(){
            string nn;
            cin>>nn;cout<<endl;
            myAcc->Add(nn);
        }

        void Fillname(){
            string name;
            cin>>name;cout<<endl;
            myAcc->Add(name);
        }

        void Fillid(){
            string id;
            cin>>id;
            cout<<endl;
            myAcc->Add(id);
        }
};


class AccountDirector{//控制建造流程
    public:
        AccountDirector(){}
        void ConstructAccount(Builder* builder){
            cout<<"Accout:";   builder->Fillaccount();
            cout<<"Password:"; builder->Fillpassword();
            cout<<"Nickname:"; builder->Fillnickname();
            cout<<"Name:";     builder->Fillname();
            cout<<"Id:";       builder->Fillid();
        }

};


#endif