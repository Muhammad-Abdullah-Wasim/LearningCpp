/* write a function to print Fibonacci series upto n. fibonacci series is defined as a 
series of numbers in which the first two numbers are 0 and 1, and each subsequent number is the sum of the previous two.*/
#include <iostream>
using namespace std;

void fibo(int num)
{
    int t1= 0;
    int t2 =1;
    int nextTerm;
    for (int i = 1; i <= num; i++)
    {
        cout<<t1<<endl;
        nextTerm = t1+t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return;
}
int main()
{
    int n;
    cin>> n;
    fibo(n);
    return 0;
}