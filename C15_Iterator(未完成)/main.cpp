#include "IteratorPattern.h"
using namespace std;
int main(){
    shared_ptr<ConcreteAggregate<int>> a(ConcreteAggregate<int>());
    a[0]=2;
    a[1]=4;
    a[2]=6;
    a[3]=8;
    a[4]=10;
    a[5]=12;
    
    shared_ptr<Iterator> it(a);
}

