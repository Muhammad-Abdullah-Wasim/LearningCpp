// switch case statement is used instead of conditioanl statement. If we have multiple option to compare an input we can use this.
#include <stdio.h>
#include <iostream>
using namespace std;
//code a grding system
int mian ()
{
    int percentage;
    cout<<"Input your Percentage: "<<endl;
    cin>>percentage;
    switch (percentage)
    {
    case ( percetnage<=100 && percentage>=85):
        cout<<"A+";
        break;
    case (percentage<=84.9 && percentage>= 80):
        cout<<"A";
        break;
    case (percentage<=79.9 && percentage>= 70):
        cout<<"B";
        break;
    case (percentage<=69.9 && percentage >= 60):
        cout<<"C";
    case (percentage<=59.9 && percentage>= 50):
        cout<<"D";
    case (percentage<50):
        cout<<"F";
    default:
        cout<<"Input your percentage from 0 to 100";
        break;
    }
    return 0;
}
