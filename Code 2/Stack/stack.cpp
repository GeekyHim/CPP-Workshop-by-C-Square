#include <iostream>
using namespace std;

#define MAX 5 // Stack size

class Stack {
public:
    int top;
    int arr[MAX];

    Stack() { 
        top = -1;
    } // Constructor

    // Push operation
    void push(int x) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
        cout << x << " pushed into stack\n";
    }

    // Pop operation
    void pop() {
        if (top < 0) {
            cout << "Stack Underflow\n";
            return;
        }
        cout << arr[top--] << " popped from stack\n";
    }

    // Peek operation
    int peek() {
        if (top < 0) {
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[top];
    }

    // Check if stack is empty
    bool isEmpty() {
        return (top < 0);
    }
};

// Main function
int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.peek() << endl;

    s.pop();
    cout << "Top element after pop: " << s.peek() << endl;

    return 0;
}
