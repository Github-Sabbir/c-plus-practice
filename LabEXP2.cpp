#include <iostream>
using namespace std;
class Node {
public:
    string passenger;
    Node* next;
    Node(string name) {
        passenger = name;
        next = NULL;
    }
};
Node* head = NULL;
void addLast(string name) {
    Node* newNode = new Node(name);
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
void addFirst(string name) {

    Node* newNode = new Node(name);

    newNode->next = head;
    head = newNode;
}
void removePassenger(string name) {
    Node* temp = head;
    Node* previous = NULL;
    if (temp != NULL && temp->passenger == name) {
        head = temp->next;
        delete temp;
        return;
    }
    while (temp != NULL && temp->passenger != name) {
        previous = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        cout << name << " is not in the queue." << endl;
        return;
    }
    previous->next = temp->next;
    delete temp;
}
void showQueue() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->passenger;
        if (temp->next != NULL)
            cout << " -> ";
        temp = temp->next;
    }
    cout << endl;
}
int main() {
    addLast("Alif");
    addLast("Bony");
    addLast("Cary");
    addLast("Rafiq");
    addLast("Hasan");
    cout << "Passenger Queue:" << endl;
    showQueue();
    addLast("Tanvir");
    cout << "\nAfter adding Tanvir at the end:" << endl;
    showQueue();
    addFirst("Mahfuz");
    cout << "\nAfter adding Mahfuz at the beginning:" << endl;
    showQueue();
    removePassenger("Bony");
    cout << "\nAfter removing Bony:" << endl;
    showQueue();
    return 0;
}
