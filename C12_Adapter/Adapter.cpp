#include "Adapter.h"
Adapter::Adapter(){

}

void Adapter::English2Chinese(){
    client->RequestInEnglish();//转调用
}