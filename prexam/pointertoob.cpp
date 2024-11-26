#include<iostream>
using namespace std;
class abc
{
    int a;
    public :
    abc(int a)
    {
        this->a=a;
    }
    void display()
    {
        cout<<"Value of A is : "<<a<<endl;
    }

};

int main()
{
    abc ob(54);
    ob.display();
    return 0;
}