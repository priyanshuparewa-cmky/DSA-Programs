// Fibonacci series program, if user enter any index number ,you have to find the 
// in place of the index number which fibonacci number is present:

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the index number : ";
    cin>>n;

    int arr[1000];

    arr[0]=0;
    arr[1]=1;

    for(int i=2; i<=n-1; i++){
        arr[i] = arr[i-1] + arr[i-2];
        cout<<arr[i]<<endl;             // This prints the fibobacci numbers
    }
    cout<<"At "<<n<<" index "<<arr[n-1]<<" Fibonacci number is present. ";
    
}