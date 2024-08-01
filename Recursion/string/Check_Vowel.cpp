#include<iostream>
using namespace std;

int CheckVowel(string str, int index)
{
    if(index==-1)
    {
        return 0;
    }

    if(str[index]=='a'||str[index]=='e'||str[index]=='i'||str[index]=='o'||str[index]=='u')
    {
        return 1+CheckVowel(str,index-1);
    }
    else
    return CheckVowel(str,index-1);
}

int main()
{
    string str = "rohita";          // string is lower case
    cout<<CheckVowel(str,5);        // here the index start from the last of the string 
}