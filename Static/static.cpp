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
};

int Abc::a=0;

int main()
{
    Abc ob,ob2;
    cout<<"VAlue of a : "<<Abc::geta()<<endl;
    ob.reset();
    cout<<"Value after reset : "<<Abc::geta()<<endl;
    return 0;
}