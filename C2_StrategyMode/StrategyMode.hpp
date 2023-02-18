#ifndef __STRATEGYMODE_HPP
#define __STRATEGYMODE_HPP
#include "iostream"
using namespace std;

enum usingStrategy{
    CASHNORMAL, //正常1
    CASHRETURN, //满减2
    CASHREBATE  //打折3
};

class CashSuper{//整合所有收费策略的借口(抽象类)
    public:
        virtual double acceptCash(double money)=0;
};

class CashNormal:public CashSuper{//无活动
    public:
        CashNormal(){
            std::cout<<"Using no payment strategy!"<<std::endl;
        }
        double acceptCash(double money){//money是应收数目
            return money;
        }
};

class CashRebate:public CashSuper{//打折
    public:
        CashRebate(double discount=10):moneyDiscount(discount){
            std::cout<<"Using the rebate strategy! Input the discount:"<<std::endl;
            std::cin>>moneyDiscount;
            moneyDiscount/=10;
        }

        double acceptCash(double money){
            return money*moneyDiscount;
        }
    private:
        double moneyDiscount;
};

class CashReturn : public CashSuper{//满减
    private:
        int _CashCondition;
        int _CashReturn;
    public:
        CashReturn(){
            std::cout<<"Using the rebate strategy! Input the CONDITION:"<<std::endl;
            std::cin>>_CashCondition;
            if(_CashCondition<=0) _CashCondition=1;
            std::cout<<"Using the rebate strategy! Input the cash to RETURN:"<<std::endl;
            if(_CashCondition<=0) _CashCondition=0;
            std::cin>>_CashReturn;
        }

        CashReturn(double CashC,double CashR):_CashCondition(CashC),_CashReturn(CashR){
        }

        double acceptCash(double money){
            double res=money;
            if(res>=_CashCondition){
                res=res-static_cast<int>(money/_CashCondition)*_CashReturn;
            }
            return res;
        }

};

class CashContext{//正在使用的收费策略
    private:
        CashSuper *cs;//注:由于CashSuper是一个接口(抽象类),所以无法被实例化,因此要用指针
    public:
        CashContext():cs(new CashNormal()){}//无参使用默认收费策略
        CashContext(int UsedCS){
            switch(UsedCS){
                case CASHNORMAL:
                    cs = new CashNormal();
                    break;
                case CASHREBATE:
                    cs = new CashRebate();
                    break;
                case CASHRETURN:
                    cs = new CashReturn();
                    break;
                default:
                    cout<<"ERROR INPUT! USE THE DEFAULT STRATEGY: NORMAL"<<endl;
                    cs = new CashNormal();
                    break;
            }
        }

        double GetResult(double money){
            return cs->acceptCash(money);
        }
};


#endif