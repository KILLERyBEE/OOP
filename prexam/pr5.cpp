#include<iostream>
using namespace std;
class abc
{
    public :
    int a;
    void print(int a);
};

void abc :: print(int a)
{
    cout<<"Value of A is ::"<<a<<endl;
}

int main()
{
    abc og;
    og.print(34);
    return 0;
}