// Print the length of the string without using size function:

#include<iostream>
using namespace std;

int main()
{
    string s="Sagar";

    int size=0;

    while(s[size] != '\0')
    {
        size++;
    }

    cout<<size;
}

