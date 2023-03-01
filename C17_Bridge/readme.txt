聚合:弱的"拥有"关系,A包含B,但B不是A的一部分,如"雁群"和"雁"的关系,雁
合成:强的"拥有"关系,整体由部分组成,整体和部分的声明周期一致

★★★★★★★★★★聚合★★★★★★★★★★★★
class WideGooseAggregate{//雁群
    private:
        vector<WideGoose> WideGooseArray;//大雁
}


★★★★★★★★★★合成★★★★★★★★★★★★
class Bird{
    private:
        Wing* wing;
    public:
        Bird(){
            wing= new Wing();
        }
};


