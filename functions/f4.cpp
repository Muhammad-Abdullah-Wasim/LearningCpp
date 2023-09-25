/* write a function to print factorial of a number n
Factorial is defined as product of all positive integers less than or equal to n*/

#include <iostream>
using namespace std;

void fact(int n)
{
    int factorial=1;
    for(int i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    cout<<factorial;
    return ;
}
int main()
{
    int n;
    cin>>n;
    fact(n);
    return 0;
}