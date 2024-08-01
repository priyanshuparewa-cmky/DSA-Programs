#include<iostream>
#include<vector>
using namespace std;

void Subsequence(int arr[], int index, int n, vector<vector<int>>&ans, vector<int>&temp)
{
    if(index==n)
    {
        ans.push_back(temp);
        return;
    }

    // Not included
    Subsequence(arr,index+1,n,ans,temp);

    // Included
    temp.push_back(arr[index]);
    Subsequence(arr,index+1,n,ans,temp);

    temp.pop_back();
}

int main()
{
    int arr[]={1,2,3};

    vector<vector<int>>ans;
    vector<int>temp;

    Subsequence(arr,0,3,ans,temp);

    for(int i=0; i<ans.size(); i++)
    {
        for(int j=0; j<ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
