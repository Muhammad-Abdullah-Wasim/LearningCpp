//write a function to find the sum of first n natural numbers
#include <iostream>
using namespace std;

int firstn(int n)
{
    int ans = (n*(n+1))/2;
    return ans;
}
int main()
{
    int num;
    cin>>num;
    cout<<firstn(num);
    return 0;
}
