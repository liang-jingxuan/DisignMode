#include "DecorateMode.hpp"
using namespace std;

int main(){
    Person *me = new Person("Jingxuan_Liang");
    //实例化可以使用的服饰
    TShirts *dtx = new TShirts();//这里必须使用指针,因为Tshirts本身没有Decorate函数,需要调用父类的Decorate函数
    BigTrouser *kk = new BigTrouser();

    dtx->Decorate(me);//我先穿上T桖   第一次调用要指明被装扮人
    kk->Decorate(me);//再穿裤子 //如果使用这个,会装配失败
    kk->Decorate(dtx);//再穿裤子
    kk->Show();


    kk->Decorate(me);   //先穿裤子
    dtx->Decorate(kk);  //再穿衣服
    dtx->Show();
    return 0;
}