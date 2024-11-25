#include<iostream>
#include<string>
using namespace std;

class game
{
    string gname;
    public:
    void getgamename()
    {
        cout<<"Enter Game Name : ";
        cin>>gname;
    }
    void displaygname()
    {
        cout<<"\nGame Name is "<<gname;
    }
};

class gtype:public game
{
    string type;
    public:
    void gettype()
    {
        cout<<"Enter Game Category : ";
        cin>>type;
    }
    void displaytype()
    {
        cout<<"\nGame Type is "<<type;
    }
};

class grating:public game
{
    int rating;
    public:
    void getrating()
    {
        cout<<"\nGive Rating :";
        cin>>rating;
    }
    void displayrating()
    {
        cout<<"\nGame Ratings are  "<<rating;
    }
};

int main()
{
    grating g1;
    gtype g2;
    g1.getgamename();
    g1.getrating();
    g2.gettype();

    g1.displaygname();
    g2.displaytype();
    g1.displayrating();

    return 0;
}