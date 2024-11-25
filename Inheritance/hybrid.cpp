#include<iostream>
using namespace std;
class base 
{
    public:
    string name,code;
    public:
    void getdata()
    {
        cout<<"Enter Name \n::";
        cin>>name;
        cout<<"\nEnter Proffesion : ";
        cin>>code;
    }
};

class Batter:public virtual base
{
    protected:
    int score;
    public:
    void getscore()
    {
        cout<<"\nEnter The score For player ";
        cin>>score;
    }
    void disbatter()
    {
        cout<<"\nTotal score is :: "<<score<<endl;
    }
};

class bowler:public virtual base
{
    protected:
    int wicket;
    public:
    void getwicket()
    {
        cout<<"\nEnter The No of Wickets";
        cin>>wicket;
    }
    void disbowler()
    {
        cout<<"\nWickets Taken are "<<wicket<<endl;
    }
};

class allrounder:public Batter,public bowler
{
    int wic,scr;
    public:
    void getwic()
    {
        cout<<"\nEnter The No of Wickets";
        cin>>wic;
    }
    void getscr()
    {
        cout<<"\nEnter The score ";
        cin>>scr;
    }

    void display()
    {
        cout<<"Name of Player is :: "<<name<<endl;
        cout<<"Proffesion of player is "<<code<<endl;
    }
    void disallrounder()
    {
        cout<<"Total Score is :: "<<scr<<" "<<"And Toatal Wicket Are :: "<<wic<<endl;
    }

};

int main()
{
    allrounder obj1[20] ;
    int n;
    cout<<"ENter The players You want add ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
    obj1[i].getdata();
    if(obj1[i].code == "BOWLER" || obj1[i].code == "Bowler" || obj1[i].code=="bowler")
    {
        obj1[i].getwicket();
        obj1[i].display();
        obj1[i].disbowler();
    }
    else if(obj1[i].code == "BATTER" || obj1[i].code == "Batter" || obj1[i].code=="batter")
    {
        obj1[i].getscore();
        obj1[i].display();
        obj1[i].disbatter();
    }
    else
    {
        obj1[i].getscr();
        obj1[i].getwic();
        obj1[i].display();
        obj1[i].disallrounder();
    }
    }
    return 0;
}