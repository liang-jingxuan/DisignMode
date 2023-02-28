#ifndef __SINGLETON__HPP__
#define __SINGLETON__HPP__
#include "iostream"
#include "memory"
//实现方法1:将单例对象作为类的属性
class Singleton{
    private:
        static Singleton* instance;
        Singleton()=default;
    public:
        static Singleton* GetInstance(){
            if (instance == nullptr){
                instance = new Singleton();
            }
            return instance;
        }

        void work(){
            std::cout<<"Do this!"<<std::endl;
        }
};
// 类型                    所属类::静态变量      = 值
Singleton* Singleton::instance = nullptr;

//实现方法2:将对象写进GetInstance函数中
class Singleton2{
    private:
        Singleton2()=default;
    public:
        static Singleton2* GetInstance(){
            static Singleton2* Instance(new Singleton2());
            /*以下这一段是不必要的,因为第一次执行这个函数会执行一次上面的实例化,
              使得指针不为空;第二次执行不会执行了
            if (Instance == nullptr){
                Instance = new Singleton2();
            }
            */
            return Instance;
        }

        void work(){
            std::cout<<"Do this!"<<std::endl;
        }
};

//智能指针版本
class Singleton3{
    private:
        Singleton3()=default;
    public:
        static std::shared_ptr<Singleton3> GetInstance(){
            static std::shared_ptr<Singleton3> InstancePtr(new Singleton3());
            return InstancePtr;
        }

        void work(){
            std::cout<<"Do this!"<<std::endl;
        }
};
#endif

