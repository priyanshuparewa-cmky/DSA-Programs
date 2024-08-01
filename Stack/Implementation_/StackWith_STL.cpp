#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int>S;        // Stack has created:

    S.push(3);
    S.push(34);
    S.push(23);
    S.push(323);

    cout<<S.top()<<endl;
    cout<<S.size()<<endl;

    S.pop();
    cout<<S.top()<<endl;

    cout<<S.empty()<<endl;



}