#include<iostream>
#include<stdlib.h>
using namespace std;

class Base 
{
    public:
    int a;
    public:
    void getdata()
    {
        cout<<"Enter Value FOr A ";
        cin>>a;
    }

};

class child : public Base 
{
    public:
    void print()
    {
        cout<<"Value of A is :: "<<a;
    }
};

int main()
{
    child ob;
    ob.getdata();
    ob.print();
    return 0;
}