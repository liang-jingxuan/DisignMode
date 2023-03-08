#include "WebFactory.h"
#include "ConcreteWeb.h"
WebFactory::WebFactory(){
    Hashtable.clear();
}

IWeb* WebFactory::GetWeb(std::string key){
    if(Hashtable.find(key)==Hashtable.end())
        Hashtable[key]=new ConcreteWeb(key);
    return dynamic_cast<IWeb*>(Hashtable[key]);
}
