#include<iostream>
using namespace std;

// int main()
// {
//     int arr[100];
//     int n;
//     cout<<"enter the size of array";
//     cin>>n;
//     cout<<"enter the elements";
//     for(int i=0; i<n; i++)
//     cin>>arr[i];

//     for(int i=0; i<n; i++)
//     cout<<arr[i]<<" "; 
// }


// searching
// int main()
// {
//     int arr[100];
//     int n,k;
//     cout<<"enter the size of array";
//     cin>>n;
//     cout<<"enter the elements";
//     for(int i=0; i<n; i++)
//     cin>>arr[i];
//     cout<<"enter the element to search";
//     cin>>k;

//     int flag=false;

//     for(int i=0; i<n; i++)
//     {
//         if(arr[i]==k)
//         {
//             flag=true;
//             break;
//         }
//     }

//     if(true)
//     {
//         cout<<"found";
//     }
//     else{
//         cout<<"Not Found";
//     }
// }

// inserting the value
// int main()
// {
//     int arr[7] = {5,6,8,1,3,6,10};
//     int pos=3;
//     int ele=26;

//     for(int i=0; i<7; i++)
//     {
//         if(i==pos)
//         {
//             arr[i]=ele;
//         }
//     }

//     for(int i=0; i<7; i++)
//     cout<<arr[i]<<" ";
// }

// Delete element by index number
// int main()
// {
//     int arr[7] = {5,6,8,1,3,6,10};
//     int pos=3;

//     for(int i=pos; i<7; i++)
//     {
//         arr[i]=arr[i+1];
//     }
//     --arr[6];

//     for(int i=0; i<6; i++)
//     cout<<arr[i]<<" ";
// }

// Delete element by element
int main()
{
    int arr[7] = {5,7,8,1,3,6,10};
    int element=3;
    int newsize=7;

    for(int i=0; i<newsize; i++)
    {
        if(arr[i]==element){
        arr[i]=arr[i+1];
        for(int j=i; j<newsize-1; j++)
        {
            arr[j]=arr[j+1];
        }

        --i;
        --newsize;
        }
    }

    for(int i=0; i<newsize; i++)
    cout<<arr[i]<<" ";
}

