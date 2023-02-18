#ifndef __OPERATIONS_HPP__
#define __OPERATIONS_HPP__

class Operations{
    protected://这里不能用private 否则子类不能使用
        double num1;
        double num2;
    public:
        Operations():num1(0),num2(0){}
        virtual double GetResult(){
            double res=0;
            return res;
        }

        void SetOperand(double n1,double n2){
            num1=n1;
            num2=n2;
        }
};

class AddOperation:public Operations{
    public:
        double GetResult(){
            double res=num1+num2;
            return res;
        }
};

class SubOperation:public Operations{
    public:
        double GetResult(){
            double res=num1-num2;
            return res;
        }
};
#endif