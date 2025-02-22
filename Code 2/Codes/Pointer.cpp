#include <iostream>
using namespace std;

int main() {
    int num = 10;      // A normal integer variable
    int *ptr = &num;   // Pointer stores the address of num

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Pointer ptr stores address: " << ptr << endl;
    cout << "Value at address stored in ptr: " << *ptr << endl; // Dereferencing the pointer

    return 0;
}
