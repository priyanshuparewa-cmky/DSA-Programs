#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 /*
    // Here we give the priority in the interger bases 
    // Max Heap (1st priority whose is most greatest element)

    priority_queue<int>p;       
    p.push(10);
    p.push(20);
    p.push(11);
    p.push(18);
    p.push(15);

    cout<<p.top()<<" ";

    // delete element
    p.pop();
    cout<<p.top()<<" ";

    // size
    cout<<p.size()<<" ";

    // print all element
    while(!p.empty())
    {
        cout<<p.top()<<" ";
        p.pop();
    }

 */

    // Here we give the priority in the interger bases 
    // Min Heap (1st priority whose is most smallest element)

    priority_queue<int,vector<int>, greater<int> >p;        // syntex for min heap

    p.push(10);
    p.push(20);
    p.push(11);
    p.push(18);
    p.push(15);

    cout<<p.top()<<" ";

    while(!p.empty())
    {
        cout<<p.top()<<" ";
        p.pop();
    }
}