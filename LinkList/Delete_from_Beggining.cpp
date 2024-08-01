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

// Function to delete the first node of the linked list
void deleteAtBeginning(Node** head_ref) {
    // Check if the list is empty
    if (*head_ref == nullptr) {
        return; // Nothing to delete
    }

    // Store the current head node
    Node* temp = *head_ref;

    // Move the head to the next node
    *head_ref = temp->next;

    // Free the memory of the deleted node
    delete temp;
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

    // Create a sample linked list
    insertAtBeginning(&head, 5);
    insertAtBeginning(&head, 4);
    insertAtBeginning(&head, 3);

    cout << "Original linked list: ";
    printList(head);

    // Delete the first node
    deleteAtBeginning(&head);

    cout << "Linked list after deletion: ";
    printList(head);

    return 0;
}
