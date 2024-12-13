#include<iostream>
using namespace std;

int main()
{
    int arr[10],i,smallest;
    cout<<"Enter The array elements :: "<<endl;
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    cout<<"Finding The smallest ...."<<endl;
    smallest=arr[0];
    for(i=0;i<5;i++)
    {
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }
    cout<<"The smallest element is : "<<smallest;
    return 0;
}