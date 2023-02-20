#ifndef __OBSERVER_HPP__
#define __OBSERVER_HPP__
#include "list"
#include "string"
#include "iostream"
class ConcreteSubject;
class Observer{//抽象订阅者
    public:
        virtual void Update()=0;
};

class Subject{//抽象内容提供商
    protected:
    public:
        virtual void Attach(Observer* ob)=0;
        
        virtual void Detach(Observer* ob)=0;

        virtual void Notify()=0;

        virtual std::string SubjectState()=0;

        virtual ~Subject(){

        }
};

class ConcreteSubject :public Subject{//具体内容提供方
    private:
        std::list<Observer*> observers;//记录订阅者  这里必须是Observer*,因为Observer无法实例化
        std::string subjectState;//状态
    public:
        ConcreteSubject(){
            subjectState.clear();
        }

        std::string SubjectState(){
            return subjectState;
        }

        void Attach(Observer* ob){
            observers.push_back(&(*ob));
        }
        
        void Detach(Observer* ob){
            observers.remove(ob);
        }

        void Notify(){
            for(std::list<Observer*>::iterator p = observers.begin();p!=observers.end();++p){
                (*p)->Update();
            }
        }

        void SetNewState(std::string str){
            subjectState.clear();
            subjectState=str;
        }
};

class ConcreteObserver:public Observer{
    private:
        std::string name;
        ConcreteSubject* subject;
        //void (*Observerhandler)();//函数指针,当有新消息更新时的处理方法

    public:
        ConcreteObserver(ConcreteSubject* subject,std::string name):name(name),subject(subject){//初始化基类的方法
        }

        void Update(){//默认处理方法
            std::string msg=(*subject).SubjectState();
            std::cout<<name<<" gets a new content:"<<msg<<std::endl;
        }

        ~ConcreteObserver(){
            delete subject;
        }
};


#endif