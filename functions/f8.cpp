// write a code to check wethre the given triplet is pythagoprian or not
#include <iostream>
using namespace std;

bool pytha(int x, int y, int z)
{
    int a = max(x,max(y,z));
    int b,c;
    if (a==x)
    {
        b=y;
        c=z;
    }
    if (a==y)
    {
        b=x;
        c=z;
    }
    else
    {
        b=x;
        c=y;
    }
    
    if (a*a==(b*b + c*c))
    {
        return true;
    }
    else
    return false;
}

int main ()
{
    int x,y,z;
    cin >> x >> y >> z;
    if (pytha(x,y,z))
    {
        cout<<"pythagorian"<<endl;
    }
    else
    cout<<"not pythagorian\n";
    
    return 0;
}