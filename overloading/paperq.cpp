#include<iostream>
#include<string.h>
using namespace std;

class String
{
    public:
    char str[100];
    public:
    void getstring()
    {
        cout<<"Enter the string ";
        cin.getline(str,100);
    }

    String operator +(const String &ob)
    {
        String temp;
        strcpy(temp.str,str);
        strcat(temp.str,ob.str);
        return temp;
    }

    void display()
    {
        cout<<"Str "<<str<<endl;
    }
};

int main()
{
    String a,b,result;
    a.getstring();
    b.getstring();
    result=a+b;
    result.display();
    return 0;
}