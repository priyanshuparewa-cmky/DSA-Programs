#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


/* 1-  

int main()
{

// Create vector and declare :

vector<int>v;

// Check size and capacity of vector :

cout<<"Size of vector : "<<v.size()<<endl;
cout<<"Capacity of vector : "<<v.capacity()<<endl;
cout<<endl;


//adding the value in vector :

v.push_back(2);
v.push_back(3);
v.push_back(7);

cout<<"Size of vector : "<<v.size()<<endl;
cout<<"Capacity of vector : "<<v.capacity()<<endl;
cout<<endl;

}

*/ 



/* 2-     

int main()
{

// vector<data_type>nameofvector(size_of_vector, initilize),
vector<int>v1(5,2);          // Array of Vector :

cout<<"Before:"<<endl;;
cout<<"Size of vector : "<<v1.size()<<endl;
cout<<"Capacity of vector : "<<v1.capacity()<<endl;
cout<<endl;

v1.push_back(8);

cout<<"After:"<<endl;;
cout<<"Size of vector : "<<v1.size()<<endl;
cout<<"Capacity of vector : "<<v1.capacity()<<endl;
cout<<endl;

}

*/


// Create another vector :


/* 3- 

int main()
{

vector<int>vnew;

vnew.push_back(4);
vnew.push_back(11);
vnew.push_back(17);
vnew.push_back(24);
vnew.push_back(29);

cout<<"Before:"<<endl;

for(int i=0; i<vnew.size(); i++)    // Printing the values:
cout<<vnew[i]<<" ";
cout<<endl;

cout<<"Size of vector : "<<vnew.size()<<endl;
cout<<"Capacity of vector : "<<vnew.capacity()<<endl;
cout<<endl;

// Delete last value from vector
vnew.pop_back();

cout<<"After:"<<endl;

for(int i=0; i<vnew.size(); i++)    // Printing the values:
cout<<vnew[i]<<" ";
cout<<endl;

cout<<"Size of vector : "<<vnew.size()<<endl;
cout<<"Capacity of vector : "<<vnew.capacity()<<endl;
cout<<endl;


// To inserting value:

vnew.insert(vnew.begin()+2,50);

cout<<"After inserting the value at 2nd index (50):";
cout<<endl;

for(int i=0; i<vnew.size(); i++)
cout<<vnew[i]<<" ";
cout<<endl;


// Remove all the elements from vector :

vnew.clear();       // only remove the elements, capacity is same

cout<<endl;
cout<<"Remove elements :";
cout<<endl;
cout<<"Size of vector : "<<vnew.size()<<endl;
cout<<"Capacity of vector : "<<vnew.capacity()<<endl;
cout<<endl;

}

*/


/* 4-

// Create another vector:

int main()
{

    vector<int>arr;
    arr.push_back(2);
    arr.push_back(11);
    arr.push_back(24);
    arr.push_back(40);

    // print the 1st value of vector:

    cout<<"0th index value of vector:"<<endl;
    cout<<arr[0]<<endl;
    cout<<arr.front()<<endl;

    cout<<"last_index value of vector:"<<endl;
    cout<<arr[arr.size()-1]<<endl;
    cout<<arr.back()<<endl;


    // Another Vector of array:

    vector<int>a;

    // Copy value of 1 vector(arr) to another vector(a): 

    a=arr;        // all values of arr copied to a vector

    cout<<"Size of arr or a vector : "<<a.size()<<endl;


    // Printing the value:

    cout<<endl;
    cout<<"Print the value of arr vector:"<<endl;

    for(auto it = arr.begin(); it != arr.end(); it++)
    {
        cout<<*it<<" ";
    }


    // Printing the values from another method:

    cout<<endl;
    for(auto i: arr)
    cout<<i<<" ";

}

*/


/* 5-

int main()
{
    vector<int>ans;
    ans.push_back(50);
    ans.push_back(77);
    ans.push_back(12);
    ans.push_back(38);
    ans.push_back(5);

    // Sorting in increasing order:


    cout<<"Sort in increasing order :"<<endl;
    sort(ans.begin(),ans.end());     

    for(int i=0; i<ans.size(); i++)
    cout<<ans[i]<<" ";
    cout<<endl;


    // Sorting in decreasing order:

    cout<<"Sort in decreasing order:"<<endl;

    sort(ans.rbegin(), ans.rend());
    for(int i=0; i<ans.size(); i++)
    cout<<ans[i]<<" ";
    cout<<endl;

}

*/


// Searching in Binary_search:

int main()
{

    vector<int>ans;
    ans.push_back(50);
    ans.push_back(77);
    ans.push_back(12);
    ans.push_back(38);
    ans.push_back(5);     

    sort(ans.begin(), ans.end());
    for(int i=0; i<ans.size(); i++)
    cout<<ans[i]<<" ";
    cout<<endl;

    // If element present: (1), and if absent:(0).

    cout<<binary_search(ans.begin(), ans.end(),77)<<endl;

}







