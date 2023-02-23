#include "Target.h"
#include "memory"
#include "Adapter.h"
int main(){
    std::shared_ptr<Target> tar=std::make_shared<Adapter>();//目标招聘一个翻译
    tar->English2Chinese();
}