#include<iostream>
using namespace std;
class base_1
{
    public:
    int m1;
    base_1()
    {
        m1=0;
    }
    base_1(int a)
    {
        m1=a;
    }
    friend int add();
};

class base_2
{
    public:
    int m2;
    base_2()
    {
        m2=0;
    }
    base_2(int a)
    {
        m2=a;
    }
    friend int add();
};


int add(const base_1 &ob,const base_2 &ob2)
{
    return(ob.m1+ob2.m2);
}

int main()
{
    base_1 ob(56);
    base_2 ob1(45);
    cout<<"Total:"<<add(ob,ob1);
    return 0;
}
