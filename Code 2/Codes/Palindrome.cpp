#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int original = num, reversed = 0, remainder;
    while (num > 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num))
        cout << num << " is a Palindrome.";
    else
        cout << num << " is NOT a Palindrome.";

    return 0;
}
