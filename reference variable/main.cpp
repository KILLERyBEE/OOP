#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int b=90;
    int &ref = a;
    cout<<ref<<endl;
    ref=20;
    cout<<ref<<endl;
    cout<<a<<endl;
    return 0;
}
