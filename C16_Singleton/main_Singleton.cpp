#include "Singleton.hpp"
using namespace std;

void PtrVersion(){
    std::shared_ptr<Singleton2> s1 (Singleton2::GetInstance());
    std::shared_ptr<Singleton2> s2 (Singleton2::GetInstance());
    if(s1.get()==s2.get()){
        std::cout<<"The same instance!"<<std::endl;
    }
    s1->work();
}

void SharedPtrVersion(){
    std::shared_ptr<Singleton3> ss1 (Singleton3::GetInstance());
    std::shared_ptr<Singleton3> ss2 (Singleton3::GetInstance());
    if(ss1.get()==ss2.get()){
        std::cout<<"The same instance!"<<std::endl;
    }
    ss1->work();
}

int main(){
    //PtrVersion();
    SharedPtrVersion();
}

