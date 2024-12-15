#include<iostream>
using namespace std;

int main()
{
    int a=0,b=1,c,n;
    cout<<"Enter the No. Of iteration : ";
    cin>>n;
    while(n>=0)
    {
        c=a+b;
        cout<<a<<endl;
        a=b;
        b=c;
        n--;
    }
    return 0;
}