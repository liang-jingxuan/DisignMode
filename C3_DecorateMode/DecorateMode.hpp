#ifndef __DECORATEMODE_HPP
#define __DECORATEMODE_HPP
#include "string"
#include "iostream"
using namespace std;
class Person{//需要被装饰的对象
    public:
        Person(){}
        
        Person(string NAME):name(NAME){}
        
        virtual void Show(){
            cout<<"are decorated to "<<name<<endl;
        }
    private:
        string name;//被装饰对象的名称
    
};

class Finery:public Person{
    protected:
        Person* component;
    
    public:
        void Decorate(Person* component){//参数为被装饰的对象
                                         //☆☆☆参数类型必须为指针!!!!因为该模式需要通过多态调用子类的show函数
                                         //如果参数的类型不使用指针,那么其类型就是Person类,因此component指向了Person类
                                         //调用的永远都是Person类的show.
                                         //使用指针后,若传过来的是Person类则调用的是Person类的show,若传过来的是具体服饰类
                                         //那么调用的是具体服饰类的show.☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆
            (*this).component = component;
        }   

        void Show(){
            if(component!=nullptr){
                component->Show();
            }
        }
};

//对象可以装配的服饰(功能/部件)
class TShirts : public Finery{
    public:
        void Show(){
            cout<<"Tshirt ";
            Finery::Show();
        }
};

class BigTrouser : public Finery{
    public:
        void Show(){
            cout<<"Big Trouser ";
            Finery::Show();
        }
};
#endif