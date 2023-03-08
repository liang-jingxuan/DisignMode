#ifndef __WEBFACTORY_H__
#define __WEBFACTORY_H__
//对应于FlyWeightFactory
#include "unordered_map"
#include "string"
#include "IWeb.h"
class WebFactory{
    private:
        
        std::unordered_map<std::string,IWeb*> Hashtable;
    public:
        WebFactory();
        IWeb* GetWeb(std::string key);
};

#endif