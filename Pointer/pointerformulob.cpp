#include<iostream>
using namespace std;
class base1
{
    public:
    void display1()
    {
        cout<<"Base 1"<<endl;
    }
};
class base2  : public base1
{
    public :
    void display1()
    {
        cout<<"Base 2"<<endl;
    }
};

class derived : public base2
{
    public:
    void display()
    {
        cout<<"Derived class"<<endl;
    }
};

int main()
{
    derived ob,*ptr;
    base1 *ptr1;
    base2 *ptr2;

    ptr = &ob;
    ptr->display();


    ptr2 = &ob;
    ptr2->display1();

    ptr1 = &ob;
    ptr1->display1();

    return 0;

}