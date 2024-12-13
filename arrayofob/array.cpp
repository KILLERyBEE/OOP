#include<iostream>
using namespace std;

class Test 
{
    public:
    char Name[100];
    int age;
    public:
    void accept()
    {
        cout<<"Enter Name"<<endl;
        cin>>Name;
        cout<<"Enter Age"<<endl;
        cin>>age;
    }
    void display()
    {
        cout<<"Name is "<<Name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};

int main()
{
    Test ob[10];
    int i;
    cout<<"ENTER DATA"<<endl;
    for(i=0;i<4;i++)
    {
        ob[i].accept();
    }
    for(i=0;i<4;i++)
    {
        ob[i].display();
    }
    return 0;
}