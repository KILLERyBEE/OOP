#include<iostream>
using namespace std;
class base 
{
    int a;
    public :
    base()
    {
        a=0;
    }
    base(int c)
    {
        a =c;
    }
    void display()
    {
        cout<<"Base class"<<endl;
    }
};

class derived:public base
{
    int b;
    public:
    derived()
    {
        b =0;
    }
    derived(int c)
    {
        b=c;
    }
    void display()
    {
        cout<<"Derived"<<endl;
    }
};

int main()
{
    derived ob(12);
    base ob1(43);
    ob.display();
    ob1.display();
    return 0;
}