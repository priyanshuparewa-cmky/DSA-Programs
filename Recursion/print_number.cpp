#include<iostream>
using namespace std;

/*
// Printing the number from 1 to N
void print(int num, int N)
{
    if(num==N){
        cout<<num<<endl;
        return;
    }
    cout<<num<<endl;
    print(num+1,N);
}
int main()
{
    int N;
    cin>>N;

    print(1,N);
}
*/


// Printing the number from 1 to N
// but buy using Reverse method

void print(int N)
{
    if(N==1)
    {
    cout<<1<<endl;
    return;
    }
    print(N-1);
    cout<<N<<endl;
}

int main()
{
    int N;
    cin>>N;     // Enter the N to print the correct number in increasing order

    print(N);
}