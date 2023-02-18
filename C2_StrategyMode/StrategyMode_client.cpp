#include "iostream"
#include "StrategyMode.hpp"
using namespace std;
int main(){
    double  AccountAcceptable,//应收
            AccountPayed;//实际接收
    std::cout<<"Input the Account Acceptable:"<<endl;//输入应收款数
    std::cin>>AccountAcceptable;
    std::cout<<"Input the Account Payed:"<<endl;//输入实际支付款数
    std::cin>>AccountPayed;
    //收费策略选择
    std::cout<<"Input the used strategy:"<<endl
             <<"input 0 for CASHNORMAL"<<endl
             <<"input 1 for CASHRETURN"<<endl
             <<"input 2 for CASHREBATE"<<endl;
    int choosedCS=1;
    cin>>choosedCS;
    CashContext* csuper=new CashContext(choosedCS);//策略更换修改此处
    //CashContext* csuper=new CashContext(CASHNORMAL);//策略更换修改此处
    //CashContext* csuper=new CashContext(CASHRETURN);//策略更换修改此处

    if(AccountPayed<AccountAcceptable){
        cout<<AccountAcceptable-AccountPayed<<"more money is required!"<<endl;
    }
    else
        cout<<"Account Changed: "
            <<AccountPayed-csuper->GetResult(AccountAcceptable)<<endl;//找回款数
}