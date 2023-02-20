#include "Factorys.hpp"
#include "iostream"
using namespace std;
int main(){
    IFactory* operFactory = new SubFactory();
    Operations *op;
    operFactory->CreateOperation(op);
    op->SetOperand(50,10);
    cout<<"50-10="<<op->GetResult()<<endl;

    delete op;delete operFactory;//这里删除了没有写析构函数的对象
    //operFactory =new AddFactory();
    //operFactory->CreateOperation(op);
    operFactory = new AddFactory();
    op=operFactory->CreateOperation();
    op->SetOperand(50,10);
    cout<<"50+10="<<op->GetResult()<<endl;


}