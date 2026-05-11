#include <iostream>
using namespace std;
struct Node {
    string name;
    Node* next;
};
Node* head = NULL;
void insertBeginning(string name) {
    Node* newNode = new Node();
    newNode->name = name;
    newNode->next = head;
    head = newNode;
}
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

    // Add Mahfuz at beginning
    insertBeginning("Mahfuz");

    cout << "Updated Passenger List:" << endl;
    display();

    return 0;
}
