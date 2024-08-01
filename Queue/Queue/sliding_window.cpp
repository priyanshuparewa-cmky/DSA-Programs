// Lacture-98: sliding window problem
#include<iostream>
#include<queue>

using namespace std;

// void display(queue<int>q)
// {
//     while(!q.empty())
//     {
//         cout<<q.front()<<" ";
//         q.pop();
//     }
//     cout<<endl;
// }

int main()
{
    int arr [] = {4,2,9,7,1,8,5};
    int n = 7;
    int k = 3;

    queue<int>q;

    // k-1 element ko push kar do queue ke andar

    for(int i=0; i<k-1; i++)
        q.push(arr[i]);

        cout<<q.front()<<endl;

        for(int i=k-1; i<n; i++)
        {
            q.push(arr[i]);

            //cout<<q.front()<<endl;

           // display(q);
            q.pop();
        }

        //cout<<endl;

        return 0;
}