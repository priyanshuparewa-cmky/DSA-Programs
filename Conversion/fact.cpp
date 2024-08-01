#include <iostream>
using namespace std;

int fact(int n)
{
    int f = 1;
    for(int i = 1; i <= n;i++)
    {
        f = f*i;
    }
    cout <<"This is cout in fact "<<f << endl;
    return f;
}
int main()
{
    int number = 5;
    cout << fact(number);
    return 0;
}


