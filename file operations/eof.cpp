#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char str;
    ifstream obj;
    obj.open("Test.txt");
    while(obj.get(str))
    {
        cout<<str;
    }
    if(obj.eof())
    {
        cout<<"\nEnd of The File"<<endl;
    }
    obj.close();
    return 0;
}