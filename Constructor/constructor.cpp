#include<iostream>
using namespace std;
class Abc
{
    private :
    int a,b;
    public :
    Abc()
    {
        a=0;
        b=0;
        cout<<"Default values set!"<<endl;
    }

    Abc(int e,int t)
    {
        a=e;
        b=t;
        cout<<"Parameterized constructor called !"<<endl;
    }

    Abc(const Abc &ab)
    {
        a=ab.a;
        b=ab.b;
        cout<<"Copy constructor called ! "<<endl;
    }

};

class def : public Abc
{
    private:
    int a;
    public:
    def()
    {
        a=0;
        cout<<"Default constructor for Derived class called ! "<<endl;
    }
};
int main()
{
    Abc ob;
    Abc ob2(32,6);
    Abc ob3 = ob2;
    def obg;
    return 0;
}