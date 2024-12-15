#include<iostream>
using namespace std;


int main()
{
    // Implicit 
    int a=90.12;
    float b = a;
    cout<<a<<endl;
    cout<<b<<endl;

    //Explicit 

    float c=12;
    int d=int(c);

    cout<<d<<endl;
    return 0;
}
