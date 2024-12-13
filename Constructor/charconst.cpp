#include<iostream>
using namespace std;
class Abc
{
    private :
    int a,b;
    string Name;
    public :
    Abc()
    {
        a=0;
        b=0;
        Name="Avdhut";
        cout<<"Default values set!"<<endl;
    }

    Abc(int e,int t,string abc)
    {
        a=e;
        b=t;
        Name=abc;
        cout<<"Parameterized constructor called !"<<endl;
    }
    void display()
    {
        cout<<"Name is : "<<Name<<endl;
        cout<<"A : "<<a<<endl;
        cout<<"B : "<<b<<endl;
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
    Abc ob2(32,6,"Avdhut Madhavi");
    ob2.display();
    ob.display();
    return 0;
}