#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {4,7,9,1,10};
    int ans = INT_MAX;

    for(int i=0; i<5; i++)
    {
        if(arr[i]<ans)
        {
            ans = arr[i];
        }
        
    }
    cout<<ans<<endl;
    return 0;
}