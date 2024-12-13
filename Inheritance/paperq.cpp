#include<iostream>
using namespace std;

class Science
{
    public:
    int phy,chem;
    public:
    Science()
    {
        phy=0;
        chem=0;
    }
    Science(int p,int c)
    {
        phy=p;
        chem=c;
    }

};

class Maths
{
    public:
    int geo,alg;
    public:
    Maths()
    {
        geo=0;
        alg=0;
    }
    Maths(int g,int a)
    {
        geo=g;
        alg=a;
    }
};

class result:public Maths,public Science
{
    public:
    int total;
    public:
    result(int p, int c, int g, int a) : Science(p, c), Maths(g, a) {
        total = 0;  
    }
    int gettotal()
    {
        total = alg+geo+phy+chem; 
        return total;  
    }
};


int main()
{
    result ob2(100,87,23,99);
    cout<<"Total is : "<<ob2.gettotal();
    return 0;
}