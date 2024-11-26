#include<iostream>
using namespace std;
class base
{
    public:
    float a,b;
    public:
    base(int d=0,int c=0):a(d),b(c){}
    base operator +(const base &ob1)
    {
        return base(a+ob1.a , b+ob1.b);
    }

    const void display()
    {
        cout<<"A = "<<a<<"   B = "<<b<<endl;
    }

    friend base operator -(base &ob,base &ob1);
};


base operator -(base &ob,base &ob1)
{
    return base(ob.a-ob1.a,ob.b-ob1.b);
}

int main()
{
    base ob1(56,23);
    ob1.display();
    base ob2(12,43);
    ob2.display();
    base ob3 = ob1 + ob2;
    ob3.display();
    base ob4 = ob1-ob2;
    ob4.display();
    return 0;
}