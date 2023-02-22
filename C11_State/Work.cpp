#include "Work.h"
#include "IState.h"

#include "Morning.h"

Work::Work():WorkState(make_shared<MorningState>()), hour(8), JobsDone(false)
{
    // WorkState(make_shared<MorningState>().get()),
}

/*
Work::Work(Work rhs): hour(w->getHour()), JobsDone(w->getTaskState())
{
    *this = w; // 浅拷贝
}
*/

Work::~Work()
{
    if (WorkState.get() != nullptr)
        WorkState.reset();
}
// 设置和查询时间
void Work::setHour(double h)
{
    this->hour = h;
}

double Work::getHour()
{
    return this->hour;
}

// 设置个人状态
void Work::setState(shared_ptr<IState> s)
{
    WorkState.reset();
    this->WorkState = s;
}

// 设置和查询工作进度
void Work::setTaskState(bool s)
{
    this->JobsDone = s;
}

bool Work::getTaskState()
{
    return this->JobsDone;
}

// 行动
void Work::WhatToDo()
{
    //this->WorkState->WriteProgram(make_shared<Work>(new Work(*this)));
    //this->WorkState->WriteProgram(this);
    this->WorkState->WriteProgram(make_shared<Work>(*this));
}

Work::Work(const Work& rhs):WorkState(rhs.WorkState),hour(rhs.hour),JobsDone(rhs.JobsDone){

}

Work::Work(const Work* rhs)
        :WorkState((*rhs).WorkState),
        hour((*rhs).hour),
        JobsDone((*rhs).JobsDone){

}