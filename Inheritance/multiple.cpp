#include<iostream>
using namespace std;

class father 
{
    string fname;
    public:
    void getfdata()
    {
        cout<<"Enter Father Name : ";
        getline(cin,fname);
    }
    void displayf()
    {
        cout<<"Father Name is :: "<<fname<<endl;
    }
};

class mother
{
    string mname;
    public:
    void getmdata()
    {
        cout<<"Enter Mother Name : ";
        getline(cin,mname);
    }
    void displaym()
    {
        cout<<"Mother Name is :: "<<mname<<endl;
    }
};

class child:public father,public mother
{
    string cname;
    public:
    void getcdata()
    {
        cout<<"\nEnter The child Name : ";
        getline(cin,cname);
    }
    void displayc()
    {
        cout<<"Child Name IS :: "<<cname<<endl;
    }
};

int main ()
{
    child c1;
    c1.getfdata();
    c1.getmdata();
    c1.getcdata();
    c1.displayf();
    c1.displaym();
    c1.displayc();
    return 0;
}
