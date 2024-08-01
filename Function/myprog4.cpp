#include <iostream>
using namespace std;

double sum()        // No arguement with return function
{
    double a,b;
    a = 10.8;
    b = 5.6;
    double s = a+b;
    return s;
}
int main()
{

    double r;
    r = sum();
    cout << r;

    return 0;
}



