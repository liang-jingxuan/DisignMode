#include "Work.h"
using namespace std;
int main(){
    shared_ptr<Work> myDay= make_shared<Work>();
    myDay->setHour(9);
    myDay->WhatToDo();
    
    myDay->setHour(11);
    myDay->WhatToDo();
    
    myDay->setHour(13);
    myDay->WhatToDo();

    myDay->setHour(15);
    myDay->WhatToDo();
    //假设6点下班，那么到了7点还没完成就算加班
    myDay->setHour(19);
    myDay->WhatToDo();

    //myDay->setTaskState(true);
    myDay->setTaskState(false);
    
    myDay->setHour(21);
    myDay->WhatToDo();
    
    myDay->setHour(23);
    myDay->WhatToDo();
    

}