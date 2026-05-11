#include <iostream>
using namespace std;
struct Node {
    string name;
    Node* next;
};
Node* head = NULL;
void insertEnd(string name) {
    Node* newNode = new Node();
    newNode->name = name;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }
}

// Delete node
void deleteNode(string name) {
    Node* temp = head;
    Node* prev = NULL;

    // If head node contains the value
    if (temp != NULL && temp->name == name) {
        head = temp->next;
        delete temp;
        return;
    }

    while (temp != NULL && temp->name != name) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
        return;

    prev->next = temp->next;
    delete temp;
}

// Display list
void display() {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->name << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main() {
    insertEnd("Alif");
    insertEnd("Bony");
    insertEnd("Cary");
    insertEnd("Rafiq");
    insertEnd("Hasan");

    // Delete Bony
    deleteNode("Bony");

    cout << "Final Passenger List:" << endl;
    display();

    return 0;
}
