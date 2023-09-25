// use functions to print prime between a and b
#include <iostream>
using namespace std;

bool isprime(int n)
{
    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a,b;
    cin>>a>>b;
    for (int i = a; i <= b; i++)
    {
        if (isprime(i))
        {
            cout << i << endl;
        }
    } 
    return 0;
}