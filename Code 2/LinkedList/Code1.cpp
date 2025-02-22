#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Linked List Class
class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = NULL;
    }

    // Insert at the end
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Delete a node
    void deleteNode(int key) {
        Node* temp = head, *prev = NULL;
        
        // If head node is the key
        if (temp != NULL && temp->data == key) {
            head = temp->next;
            delete temp;
            return;
        }

        // Search for the key
        while (temp != NULL && temp->data != key) {
            prev = temp; // end me previous me pichla element aa gya
            temp = temp->next; // temp me del karne wala aa gya
        }

        // If key not found
        if (temp == NULL) return;

        // Unlink the node
        prev->next = temp->next; 

        // temp to be deleted
        // keh diya ki prev ka next part hai vo del wale element ki jagah  
        delete temp;
    }

    // Display Linked List
    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

// Main function
int main() {
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.insertAtEnd(40);

    cout << "Linked List: ";
    ll.display();

    ll.deleteNode(20);
    cout << "After Deletion: ";
    ll.display();

    return 0;
}
