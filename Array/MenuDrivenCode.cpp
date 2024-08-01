#include <iostream>
using namespace std;

const int MAX_SIZE = 10;

class ArrayOperations {
private:
    int arr[MAX_SIZE];
    int size;

public:
    ArrayOperations() : size(0) {}

    void createArray() {
        cout << "Enter the size of the array: ";
        cin >> size;

        if (size > 0 && size <= MAX_SIZE) {
            cout << "Enter the elements: ";
            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }
            cout << "Array created successfully." << endl;
        } else {
            cout << "Invalid array size." << endl;
        }
    }

    void traverseArray() {
        if (size == 0) {
            cout << "Array is empty." << endl;
        } else {
            cout << "Array: ";
            for (int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    void searchArray() {
        if (size == 0) {
            cout << "Array is empty. Cannot search." << endl;
            return;
        }

        int element;
        cout << "Enter the element to search: ";
        cin >> element;

        for (int i = 0; i < size; i++) {
            if (arr[i] == element) {
                cout << "Element found at index " << i << endl;
                return;
            }
        }

        cout << "Element not found in the array." << endl;
    }

    void bubbleSort() {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    // Swap arr[j] and arr[j + 1]
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        cout << "Array sorted using Bubble Sort." << endl;
    }

    void insertElement() {
        if (size < MAX_SIZE) {
            int pos, element;

            cout << "Enter the position to insert: ";
            cin >> pos;

            if (pos >= 0 && pos <= size) {
                cout << "Enter the element to insert: ";
                cin >> element;

                for (int i = size; i > pos; i--) {
                    arr[i] = arr[i - 1];
                }

                arr[pos] = element;
                size++;

                cout << "Element inserted successfully." << endl;
            } else {
                cout << "Invalid position. Element not inserted." << endl;
            }
        } else {
            cout << "Array is full. Cannot insert element." << endl;
        }
    }

    void deleteElement() {
        if (size > 0) {
            int pos;

            cout << "Enter the position to delete: ";
            cin >> pos;

            if (pos >= 0 && pos < size) {
                for (int i = pos; i < size - 1; i++) {
                    arr[i] = arr[i + 1];
                }

                size--;

                cout << "Element deleted successfully." << endl;
            } else {
                cout << "Invalid position. Element not deleted." << endl;
            }
        } else {
            cout << "Array is empty. Cannot delete element." << endl;
        }
    }
};

int main() {
    ArrayOperations arrayOps;
    int choice;

    do {
        cout << "Menu:" << endl;
        cout << "1. Create Array" << endl;
        cout << "2. Traverse Array" << endl;
        cout << "3. Search Array" << endl;
        cout << "4. Bubble Sort" << endl;
        cout << "5. Insert Element" << endl;
        cout << "6. Delete Element" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                arrayOps.createArray();
                break;

            case 2:
                arrayOps.traverseArray();
                break;

            case 3:
                arrayOps.searchArray();
                break;

            case 4:
                arrayOps.bubbleSort();
                break;

            case 5:
                arrayOps.insertElement();
                break;

            case 6:
                arrayOps.deleteElement();
                break;

            case 7:
                cout << "Exiting program." << endl;
                break;

            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
                break;
        }

    } while (choice != 7);

    return 0;
}
