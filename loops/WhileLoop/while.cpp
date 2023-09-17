// while loop is used to execute statement repeatedly until the condition is true
// syntax: while(condition) {statement}

#include <iostream>
using namespace std;

int main()
{   
    int a;
    cin>>a;
    while(a>10)
    {
        cout<<a<<endl;
        a--;
    }
    return 0;
}