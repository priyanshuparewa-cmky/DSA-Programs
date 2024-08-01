#include<iostream>
using namespace std;

char convert(char name)
{
    int ans;
    ans = name-'a'+'A';

    return ans;
}


int main()
{
    char alpha;
    cout<<"Enter the character = ";
    cin>>alpha;
    cout<<convert(alpha);
}