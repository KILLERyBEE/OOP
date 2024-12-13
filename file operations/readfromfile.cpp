#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string abc;
    ofstream ob;
    ob.open("Test.txt");
    cout<<"Enter the data"<<endl;
    getline(cin,abc);
    cout<<"This data will be inserted in opened file"<<endl;
    ob<<abc;
    ob.close();
    ifstream ob1;
    ob1.open("Test.txt");
    ob1.seekg(0);
    while(getline(ob1,abc))
    {
        cout<<abc;
    }
    
    
    return 0;
}