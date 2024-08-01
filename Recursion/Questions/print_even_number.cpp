#include<iostream>
using namespace std;

// First Method to print even number
/*
void printeven(int num, int N)
{
    if(num==N)      // Base Case
    {
        cout<<num<<endl;
        return;
    }
    cout<<num<<endl;
    printeven(num+2,N);
}

int main()
{
    int N;
    cin>>N;
    if(N%2==1)
    N--;

    printeven(2,N);
}
*/

// Print Second Method to print even number 
// Similar as upper method only some changes

/*
void printeven(int num,int N)
{
    if(num>N)       // Base Case
    {
        return;
    }
    cout<<num<<endl;
    printeven(num+2,N);
}

int main()
{
    int N;
    cin>>N;    // For N, here you entered only even number  not valid for odd number

    printeven(2,N);
}
*/

// Another Method to print even number by using Reverse way

void printeven(int N)
{
    if(N==2)
    {
    cout<<2<<endl;
    return;
    }
    printeven(N-2);
    cout<<N<<endl;
}

int main()
{
    int N;
    cin>>N;
    if(N%2==1)
    N--;

    printeven(N);
}

