#include <iostream>
using namespace std;

#define MAX 5 // Queue size

class Queue {
private:
    int front, rear;
    int arr[MAX];

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // Enqueue operation
    void enqueue(int x) {
        if (rear == MAX - 1) {
            cout << "Queue Overflow\n";
            return;
        }
        if (front == -1) front = 0;
        arr[++rear] = x;
        cout << x << " enqueued into queue\n";
    }

    // Dequeue operation
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow\n";
            return;
        }
        cout << arr[front++] << " dequeued from queue\n";
    }

    // Peek operation
    int peek() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[front];
    }

    // Check if queue is empty
    bool isEmpty() {
        return (front == -1 || front > rear);
    }
};

// Main function
int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.peek() << endl;

    q.dequeue();
    cout << "Front element after dequeue: " << q.peek() << endl;

    return 0;
}
