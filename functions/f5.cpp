//write a code to find nCr of two values.
//nCr= n! / r! * (n-r)!
#include <iostream>
using namespace std;

int fact(int num)
{
    int factorial =1;
    for(int i=1;i<=num;i++)
    {
        factorial =factorial*i;
    }
    return factorial;
}
int main()
{
    int n,r;
    cin>>n>>r;
    int ans = (fact(n))/(fact(r)*fact(n-r));
    cout<<ans<<endl;
}