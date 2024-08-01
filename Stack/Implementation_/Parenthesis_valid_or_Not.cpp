// Parenthesis Checker:

#include<iostream>
#include<stack>

using namespace std;

bool check(string str)
{
    stack<char>s;

    for(int i=0; i<str.size(); i++)
    {
        if(str[i] == '(')
        s.push(str[i]);

        else
        {
            if(s.empty())
            return 0;
            
            else
            s.pop();
        }
    }
    return s.empty();
}

int main()
{
    string str;
    cout<<"Enter the string ";
    getline(cin, str);

    if(getline(cin, str))
    cout<<"correct";
    else
    cout<<"Not correct";
    cout<<check(str)<<endl;

    return 0;
}