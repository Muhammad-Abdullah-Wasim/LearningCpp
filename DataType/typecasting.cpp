#include <iostream>
using namespace std;

int main(){
    //Implicit typecasting: This occurs when the compiler automatically converts one data type to another to perform an arithmetic operation.
    int a=10;
    double b = 5.9;
    double c = a+b; //here a is implilictly converted to dataype bool

    //Explicit typecasting: This occurs when the programmer explicitly casts one data type to another using a typecast operator. The general syntax for a typecast operator is (type) value.
    int d = (int)b;
    double f = (double)a;
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<f;


    return 0;
}