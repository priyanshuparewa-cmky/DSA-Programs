#include <iostream>
using namespace std;

int sum(int a=10,int b=10)      // Arguement with return function
{
    int s = a+b;
    return s;
}
int main()
{
    int a1 = 90;
    int b1 = 20;

    int r;
    r = sum(b1,a1);
    cout << r;

    return 0;
}



