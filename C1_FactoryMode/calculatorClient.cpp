#include "calculatorFactory.hpp"
#include "iostream"
using namespace std;
int main(){
    
    Operation *oper ;
    OperationFactory::createOperator('+', oper);
    //这里不使用oper=&OperationFactory::createOperator('+');//是因为会提示错误,使用了一个右值
    oper->setNum(15,20);
    cout<<oper->GetResult();
    delete oper;//注:父类指针指向子类,释放的时候可能导致内存泄露!!!必须给子类写析构函数!!!
    
    //下面的方法不可行!!!没有使用多态,GetResult永远调用父类的
    //Operation oper=OperationFactory::createOperator('+');
    //oper.setNum(15,15);
    //cout<<oper.GetResult();
    return 0;
}
