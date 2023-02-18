#include "Builder.hpp"
using namespace std;
int main(){
    AccountDirector* dir = new AccountDirector();
    Builder* b1 = new concreteBuilder();
    dir->ConstructAccount(b1);
    Account* A1=b1->DeliverAccount();
    A1->show();
}