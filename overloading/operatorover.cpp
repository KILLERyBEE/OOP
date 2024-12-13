#include <iostream>
using namespace std;

class Number {
    public:
    int value;
    int a;
    public:
    Number(int val = 0) : value(val) {}
    Number operator -() const {
        return Number(-value);
    }
    friend Number operator ++(const Number &ob);
    void display() const {
        cout << "Value: " << value << endl;
    }
};

Number operator ++(Number &ob)
{
    ob.value++;
    return ob;
}

int main() {
    Number num1(12);
    cout << "Original ";
    num1.display();

    Number num2 = -num1;
    cout << "After applying unary '-': ";
    num2.display();

    Number num3 = ++num1;

    num3.display();

    return 0;
}
