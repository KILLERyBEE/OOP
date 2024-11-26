#include<iostream>
using namespace std;
class Abc
{
  public:
  friend int add(int a,int b);
  friend int sub(int a,int b);
};

int add(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}

int main()
{
    int a=5,b=23;
    cout<<"Addition : "<<add(a,b)<<endl;
    cout<<"Subtraction : "<<sub(a,b)<<endl;
    return 0;
}