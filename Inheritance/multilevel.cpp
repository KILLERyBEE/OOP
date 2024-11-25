#include<iostream>
using namespace std;
class area
{
    public:
    int getarea(int l,int b)
    {
        return l*b;
    }
};

class perimeter:public area
{
    public:
    int getperimeter(int l, int b)
    {
        return l+b;
    }
};

class rectangle:public perimeter
{
    int length , breadth;
    public:
    void getdata()
    {
        cout<<"Enter The length : ";
        cin>>length;
        cout<<"\nEnter the Breadth ";
        cin>>breadth;
    }
    void calarea()
    {
        cout<<"Area is :: "<<getarea(length,breadth);
    }
    void calperimeter()
    {
        cout<<"\nPerimeter Is :: "<<getperimeter(length,breadth);
    }
};

int main()
{
    rectangle ob;
    ob.getdata();
    ob.calarea();
    ob.calperimeter();
    return 0;
}