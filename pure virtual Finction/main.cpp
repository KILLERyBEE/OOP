#include<iostream>
using namespace std;

class pure 
{
    public:
    int a;
    virtual void fun()=0;

    pure(int v)
    {
        a=v;
    }
    void display()
    {
        cout<<a<<endl;
    }
};

class base:public pure
{
    public:
    int b;
    public:
    base(int f,int v):pure(f)
    {
        b=v;
    }

    void fun()
    {
        cout<<"Enjoy";
    }
};


int main()
{
    base ob(23,19);
    ob.display();
    return 0;
}