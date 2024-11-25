#include<iostream>
using namespace std;
#include<fstream>

int main()
{
    char str[100];
    ofstream ob("Heloo.txt");
    ob<<"Hi guys !!";
    ob.close();
    ofstream ob2("Welcom.txt");
    ifstream ob3("Heloo.txt");
    while(ob3.getline(str,100))
    {
        ob2<<str;
    }
    ob2.close();
    ob3.close();
    return 0;
}
