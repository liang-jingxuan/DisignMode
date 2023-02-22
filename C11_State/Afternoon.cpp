#include "Afternoon.h"
#include "NightState.h"

void AfternoonState::WriteProgram(std::shared_ptr<Work> w){
    if(w->getHour()<18){
        std::cout<<"It is afternoon"<<w->getHour()<<" now."<<std::endl;
    }
    else{
        w->setState(std::make_shared<NightState>());
        w->WhatToDo();
    }
}