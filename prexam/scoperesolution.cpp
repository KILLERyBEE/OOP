#include<iostream>
using namespace std;
int a=10;
int main()
{
    int a =20;
    cout<<"Global A value : "<<a<<endl;
    cout<<"Local A value : "<<::a<<endl;
    return 0;
}