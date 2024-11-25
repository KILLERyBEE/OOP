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

int Abc::a=10;

int main()
{
    Abc ob;
    cout<<"VAlue of a : "<<Abc::geta()<<endl;
    return 0;
}