#include <iostream>
using namespace std;

// Function to demonstrate pass by value
void passByValue(int a) {
    a = a + 10;
    cout << "Inside passByValue function: " << a << endl;
}

// Function to demonstrate pass by reference
void passByReference(int &b) {
    b = b + 10;
    cout << "Inside passByReference function: " << b << endl;
}

int main() {
    cout<<endl<<endl<<endl;
    int x = 5, y = 5;

    cout << "Before passByValue function call: " << x << endl;
    passByValue(x);
    cout << "After passByValue function call: " << x << endl;  // x remains unchanged

    cout << "\nBefore passByReference function call: " << y << endl;
    passByReference(y);
    cout << "After passByReference function call: " << y << endl;  // y changes

    return 0;
}
