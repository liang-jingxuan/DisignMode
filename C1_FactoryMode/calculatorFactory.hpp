#ifndef __EASYFACTORY_HPP
#define __EASYFACTORY_HPP
using namespace std;

class Operation{
    protected:
        double num1;
        double num2;
    
    public:
        void setNum(double n1,double n2){
            num1=n1;
            num2=n2;
        }

        virtual double GetResult(){//将这个函数设定为虚函数是计算器类的重点
            double result=0;
            return result;
        }
        virtual ~Operation(){
            
        }
};

class OperationAdd : public Operation{
    public:
        double GetResult(){
            return num1 + num2; //子类可以访问父类的private属性?
                                //答:子类不可以访问父类的private属性
        }
        ~OperationAdd(){
            //什么也不用写,因为该类没有任何一个指针
        }
};


//因为下面这个类用到了Operation类和各种具体运算符类,所以放在最后
class OperationFactory{

    public:
        static void createOperator(const char c,Operation* &op){
                                                    //1.为什么需要static?这样就不必示例化一个工厂出来
            switch(c){
                case '+':
                    op = new OperationAdd();
                    break;
                case '-':
                    break;
            }
        }

        static Operation createOperator(const char c){
                                                    //1.为什么需要static?这样就不必示例化一个工厂出来
            Operation *op=nullptr;
            switch(c){
                case '+':
                    op = new OperationAdd();
                    break;
                case '-':
                    break;
            }
            return *op;
        }
};


#endif