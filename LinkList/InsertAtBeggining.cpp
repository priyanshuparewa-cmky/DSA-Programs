#include <iostream>

using namespace std;

// Structure of a node in the linked list
struct Node {
    int data;
    Node* next;
};

// Function to insert a node at the beginning of the linked list
void insertAtBeginning(Node** head_ref, int new_data) {
    // Allocate memory for the new node
    Node* new_node = new Node();

    // Put data in the new node
    new_node->data = new_data;

    // Make the new node's next point to the current head
    new_node->next = (*head_ref);

    // Change the head to point to the new node
    (*head_ref) = new_node;
}

// Function to print the linked list
void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr; // Initially, the linked list is empty

    insertAtBeginning(&head, 5);
    insertAtBeginning(&head, 4);
    insertAtBeginning(&head, 3);

    cout << "Created linked list: ";
    printList(head);

    return 0;
}
