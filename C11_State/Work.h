
#ifndef __WORK_H__
#define __WORK_H__
#include "memory"
using std::shared_ptr;

class IState;

//------------------------------工作状态-------------------------------
class Work{
    private:
        shared_ptr<IState> WorkState;
        double hour;
        bool JobsDone;
    public:
        Work();
        Work(const Work& rhs);
        Work(const Work* rhs);
        ~Work();
        //设置和查询时间
        void setHour(double h);
        double getHour();

        //设置个人状态
        void setState(shared_ptr<IState> s);

        //设置和查询工作进度
        void setTaskState(bool s);
        bool getTaskState();

        //行动
        void WhatToDo();
};
#endif