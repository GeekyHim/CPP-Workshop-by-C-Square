#include <iostream>
using namespace std;

// Inline function to calculate the square of a number
inline int square(int x) {
    return x * x;
}

int main() {
    cout << "Square of 5: " << square(5) << endl;
    cout << "Square of 8: " << square(8) << endl;
    return 0;
}
