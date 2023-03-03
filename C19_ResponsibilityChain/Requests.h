#ifndef __REQUESTS_H__
#define __REQUESTS_H__
#include "string"
enum WhatRequest{
    JiaXin,
    QingJia
};
class Requests{
    public:
        WhatRequest t;
        std::string why;
        int num;
};

#endif
