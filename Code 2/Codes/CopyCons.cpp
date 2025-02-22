#include <iostream>
using namespace std;

class Car {
public:
    string brand;

    Car(string b) {
        brand = b;
    }

    Car(Car &c) {
        brand = c.brand;
        cout << "Copy Constructor Called!" << endl;
    }
};

int main() {
    string str = "FORD";
    Car c1(str);   // Creating object c1
    Car c2(c1);      // Using copy constructor
    cout << "Car 1 Brand: " << c1.brand << endl;
    cout << "Car 2 Brand: " << c2.brand << endl;
    return 0;
}
