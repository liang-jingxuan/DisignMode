#ifndef __ITERATORPATTERN__H__
#define __ITERATORPATTERN__H__
#include "memory"
#include "list"
template<class T>
//迭代器,用于遍历聚集
class Iterator{
    public:
        virtual std::shared_ptr<T> begin()=0;//返回迭代器首个元素的指针
        virtual std::shared_ptr<T> next()=0;
        virtual bool isDone()=0;
        virtual std::shared_ptr<T> CurrentItem()=0;
};

template <class T>
class ConcreteIterator:public Iterator{
    private:
        std::shared_ptr<ConcreteAggregate<T>>  aggregate;//存储即将被遍历的聚集
        int current;//记录当前遍历到聚集中的哪一个
    public:
        ConcreteIterator(std::shared_ptr<ConcreteAggregate<T>> aggregate)
            :aggregate(aggregate),current(0){
            
        }

        std::shared_ptr<T> begin(){
            return std::make_shared<T>(aggregate[0]);
        }

        std::shared_ptr<T>  next(){
            std::shared_ptr<T> ret;
            current++;
            if(current < aggregate->Count())
                ret = std::makeshared<T>(aggregate[current]);
            return ret;
        }

        bool IsDone(){
            return current >= aggregate.Count() ? true:false;
        }

        std::shared_ptr<T> CurrentItem(){
            return aggregate[current];
        }
};
//聚集:聚集类似于一个集合
template<class T>
class Aggregate{
    public:
        Iterator<T> CreateIterator()=0;//创建一个迭代器
        //shared_ptr<ConcreteAggregate<int>> p(new ConcreteAggregate<int>()) 
        // Iterator it = p->CreateIterator()
};

template<class T>
class ConcreteAggregate:public Aggregate{//具体聚集
    private:
        std::list<T> items;//聚集,用于存储类型为T的数据
    public:
        std::shared_ptr<Iterator> CreateIterator(){//这里只能返回Iterator指针,不然无法继承...
            return ConcreteIterator<T>(std::shared_ptr<ConcreteAggregate<T>>(this));//返回一个
        }

        int Count(){
            return items.size();
        }

        T& operator[](int idx){
            std::list<T>::iterator it = this->items.begin();
            for (int ix = 0; ix < i; ix++)
            {
                it++;
            }
            return it->data();
        }
};
#endif