#include<iostream>
using namespace std;

class Abc
{
    public:
    int static a;
    public:
    Abc()
    {
        a++;
    }

    int getresult()
    {
        return a;
    }  

    void static reset()
    {
        a=0;
    } 
};

int Abc::a=0;
int main()
{
    Abc ob,ob1;
    cout<<"Objects Created "<<ob.getresult()<<endl;
    ob.reset();
    cout<<"Objects Created "<<ob.getresult();
    return 0;
}