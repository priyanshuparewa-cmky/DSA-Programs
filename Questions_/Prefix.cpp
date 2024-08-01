//Divide Array in Two Sub-Array with equal sum:
/*
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool divide(vector<int>arr)
{

    int total_sum=0, n=arr.size(), prefix=0;

    for(int i=0; i<n; i++)
    total_sum+=arr[i];

    for(int i=0; i<n; i++)
    {
        prefix+=arr[i];
        int ans = total_sum - prefix;

        if(ans == prefix)
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;
    vector<int>v(n);

    cout<<"Enter the elements in vector : ";
    for(int i=0; i<n; i++)
    cin>>v[i];

    cout<<divide(v);            // divide function call :

}

*/

// Another logic to solve the same problem :

#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n;

    cout << "Enter the size: ";
    cin >> n;

    cout << "Enter the elements : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool possible = false;
    for (int i = 0; i < n - 1; i++) {
        int first_sum = 0, sec_sum = 0;

        // Calculate first_sum from i+1 to n-1
        for (int j = 0; j <= i; j++) {
            first_sum += arr[j];
        }

        // Calculate sec_sum from 0 to i
        for (int j = i+1; j < n; j++) {
            sec_sum += arr[j];
        }

        if (first_sum == sec_sum) {
            possible = true;
            break;
        }
    }

    if (possible) {
        cout << "Possible to divide array into 2 sub-arrays with equal sum." << endl;
    } else {
        cout << "Not possible to divide." << endl;
    }

    return 0;
}

