// Tower of Hanoi

#include <iostream>
using namespace std;

void towerOfHanoi(int n, char sou, char help, char dest) {

    if (n == 1) {
        cout << "Move disk 1 from " << sou << " to " << dest <<endl;
        return;
    }

    towerOfHanoi(n - 1, sou, dest, help);
    cout << "Move disk " << n << " from " << sou << " to " << dest<<endl;

    towerOfHanoi(n - 1, help, sou, dest);
}

int main() {
    int element;

    cout<< "Enter the number of element: ";
    cin>>element;

    towerOfHanoi(element, 'A', 'B', 'C');

    return 0;
}
