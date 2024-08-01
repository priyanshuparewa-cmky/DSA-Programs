 // To occupy the space in HEAP int "Dynamically Memory Allocation"

 
 #include<iostream>
 using namespace std;

 int main()
 {
    int *ptr = new int;         // allocation of memort in heap
    *ptr=5;             // value assign
    cout<<*ptr<<endl;

    float *ptr1 = new float;
    *ptr1=3.5;                  // value assign
    cout<<*ptr1<<endl;


    // creating a array and assiging space in heap

    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;

    int *p = new int[n];

    // inserting the value in array
    for(int i=0; i<n; i++)
    p[i]=i+1;


    // for printing the result or result
    for(int i=0; i<n; i++)
    cout<<p[i]<<endl;


    // Now for Releasing the memory in Heap, by using 'delete' keyword
    // Here after using the memory it release the space 

    delete ptr;
    delete ptr1;
    delete[] p;

 }