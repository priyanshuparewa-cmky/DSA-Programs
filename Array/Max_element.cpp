#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {4,7,9,10,30};
    int ans = INT_MIN;

    for(int i=0; i<5; i++)
    {
        if(arr[i]>ans)
        {
            ans = arr[i];
        }
    }
    cout<<ans;
    return 0;
}