// switch case statement is used instead of conditioanl statement. If we have multiple option to compare an input we can use this.
// I wrote this code to grade a student based on his/her percentage, But this thing is'nt working because i did'nt knwe that in switch case the value should be constant and we cant put a condition in it.
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
    case (percentage<=100 && percentage>=85):
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
        break;
    case (percentage<=59.9 && percentage>= 50):
        cout<<"D";
        break;
    case (percentage<50):
        cout<<"F";
        break;
    default:
        cout<<"Input your percentage from 0 to 100";
        break;
    }
    return 0;
}
