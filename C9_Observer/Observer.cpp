#include "Observer.hpp"
using namespace std;
int main(){
    ConcreteSubject* s = new ConcreteSubject();
    ConcreteObserver* ObA=new ConcreteObserver(s,"A");
    ConcreteObserver* ObB=new ConcreteObserver(s,"B");
    ConcreteObserver* ObC=new ConcreteObserver(s,"C");

    s->Attach(ObA);
    s->Attach(ObB);
    s->Attach(ObC);

    s->SetNewState("Hello!");
    s->Notify();

    s->SetNewState("This is Liang Jingxuan!");
    s->Notify();

    s->Detach(ObA);
    s->SetNewState("Nice to meet you!");
    s->Notify();

    s->Attach(ObA);
    s->SetNewState("I love PWY");
    s->Notify();
}