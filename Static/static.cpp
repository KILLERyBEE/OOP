#include<iostream>
using namespace std;
class Abc
{
    private:
    static int a;
    public :
    Abc()
    {
        a++;
    }
    static void reset()
    {
        a=0;
    }
    static int geta()
    {
        return a;
    }
    int static add(int a,int b);
};

int Abc::a=0;

int  Abc::add(int a,int b)
{
    return a+b;
}
int main()
{
    Abc ob,ob2;
    cout<<"VAlue of a : "<<Abc::geta()<<endl;
    ob.reset();
    cout<<"Value after reset : "<<Abc::geta()<<endl;
    cout<<"Addition is "<<ob.add(12,22);
    return 0;
}