// check a given sting is a pallindrome or not:

#include<iostream>
using namespace std;

int main()
{
    string s="naman";

    int start=0, end=s.size()-1;

    while(start<end)
    {
        if(s[start] != s[end])
        {
            cout<<"It is not a pallindrome:";
            return 0;
        }
        start++;
        end--;
    }

    cout<<"It is a pallindrome:";
}