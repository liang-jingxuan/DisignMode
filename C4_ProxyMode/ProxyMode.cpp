#include "ProxyMode.hpp"

int main(){
    BeautifulGirl *pwy = new BeautifulGirl("Wanying-Pan");
    
    Proxy* daili = new Proxy(*pwy);

    daili->GiveChocolate();
    daili->GiveDolls();
    daili->GiveFlowers();




    return 0;
}