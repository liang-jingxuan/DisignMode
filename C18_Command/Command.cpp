#include "Command.h"
Command::Command(std::shared_ptr<Barbecuer> receiver):CommandExcuter(receiver){}


int Command::Typeinfo(){
    return TypeID;
}

int Command::TypeID=0;