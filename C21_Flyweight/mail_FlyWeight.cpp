#include "ConcreteWeb.h"
#include "WebFactory.h"
#include "iostream"
using namespace std;
int main(){
    WebFactory* fct = new WebFactory();

    IWeb* WEB_A = fct->GetWeb("Blog");
    WEB_A->Use(new UserInfo("USERA"));

    IWeb* WEB_C = fct->GetWeb("Blog");
    WEB_C->Use(new UserInfo("USERC"));

    if(WEB_A==WEB_C){
        std::cout<<"shared object!"<<std::endl;
    }

    IWeb* WEB_B = fct->GetWeb("WEB");
    WEB_B->Use(new UserInfo("USERB"));

    if(WEB_A==WEB_B){
        std::cout<<"shared object!"<<std::endl;
    }

}

