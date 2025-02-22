#include <iostream>
using namespace std;

void fibonacciIterative(int n) {
    int a = 0, b = 1, c;
    cout << "Fibonacci Series: " << a << " " << b << " ";
    for (int i = 2; i < n; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    if (n == 1)
        cout << "Fibonacci Series: 0";
    else
        fibonacciIterative(n);

    return 0;
}
