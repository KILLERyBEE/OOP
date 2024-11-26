#include <iostream>
#include <iomanip> // For manipulators
using namespace std;

int main() {
    double pi = 3.14159265359;
    int num = 255;

    cout << "Default PI: " << pi << endl;

    // Using manipulators
    cout << "PI with precision 3: " << setprecision(3) << pi << endl;
    cout << "PI with precision 5: " << setprecision(5) << fixed << pi << endl;

    cout << "\nNumber formatting: " << endl;
    cout << "Decimal: " << dec << num << endl;
    cout << "Hexadecimal: " << hex << num << endl;
    cout << "Octal: " << oct << num << endl;

    cout << "\nTable with setw:" << endl;
    cout << setw(10) << "Name" << setw(10) << "Marks" << endl;
    cout << setw(10) << "Alice" << setw(10) << 95 << endl;
    cout << setw(10) << "Bob" << setw(10) << 89 << endl;

    return 0;
}
