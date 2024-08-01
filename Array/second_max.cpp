#include<iostream>
using namespace std;

int main()
{

int arr[100];

int n;
cin>>n;


for(int i=0; i<n; i++)
cin>>arr[i];

int index=arr[0];

for(int i=0; i<n; i++)
{
    if(arr[i]>index)
    index=arr[i];  
    
}
cout<<index<<endl;
int sec_max=index;

index=arr[0];

for(int i=0; i<n; i++)
{
    if(arr[i]>index && arr[i]<sec_max)
    index=arr[i];
}

cout<<index;

}