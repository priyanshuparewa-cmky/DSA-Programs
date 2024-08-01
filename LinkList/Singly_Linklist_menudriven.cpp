#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void insertBegin(int value) {
        Node* newNode = new Node{value, head};
        head = newNode;
        cout << "Element inserted at the beginning." << endl;
    }

    void insertEnd(int value) {
        Node* newNode = new Node{value, nullptr};
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cout << "Element inserted at the end." << endl;
    }

    void deleteBegin() {
        if (head == nullptr) {
            cout << "List is empty. Cannot delete from the beginning." << endl;
        } else {
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "Element deleted from the beginning." << endl;
        }
    }

    void deleteEnd() {
        if (head == nullptr) {
            cout << "List is empty. Cannot delete from the end." << endl;
        } else if (head->next == nullptr) {
            delete head;
            head = nullptr;
            cout << "Element deleted from the end." << endl;
        } else {
            Node* temp = head;
            while (temp->next->next != nullptr) {
                temp = temp->next;
            }
            delete temp->next;
            temp->next = nullptr;
            cout << "Element deleted from the end." << endl;
        }
    }

    void displayList() {
        Node* temp = head;
        cout << "Linked List: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;
    int choice, value;

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Insert at Beginning" << endl;
        cout << "2. Insert at End" << endl;
        cout << "3. Delete from Beginning" << endl;
        cout << "4. Delete from End" << endl;
        cout << "5. Display Linked List" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to insert at the beginning: ";
                cin >> value;
                list.insertBegin(value);
                break;

            case 2:
                cout << "Enter the value to insert at the end: ";
                cin >> value;
                list.insertEnd(value);
                break;

            case 3:
                list.deleteBegin();
                break;

            case 4:
                list.deleteEnd();
                break;

            case 5:
                list.displayList();
                break;

            case 6:
                cout << "Exiting program." << endl;
                break;

            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
                break;
        }

    } while (choice != 6);

    return 0;
}