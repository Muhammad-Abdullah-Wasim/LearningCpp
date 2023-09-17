/*if else statement is used when we want to execute a block of code when a particular condition is true
and another block of code when it is false.*/
#include <iostream>
using namespace std;

//writing a code to give discount to a customer, if his bill is greater than 1000 then 2% , if his previous month shopping is more than or equal to 5000 then 5%
int main()
{
    int bill,lastmonthbill;
    cout<<"Enter your bill amount: ";
    cin>>bill;
    cout<<"\nEnter Last Month Total Bill Amount: ";
    cin>>lastmonthbill;
    if (bill>=1000 && lastmonthbill>=5000)
    {
        cout<<"\n Your Total Bill is: "<<(bill)-((bill*5)/100)<<endl;
    }
    else if (bill>=1000)
    {
        cout<<"\n Your Total Bill is: "<<(bill)-((bill*2)/100)<<endl;
    }
    else
    {
        cout<<"\n Your Total Bill is: "<<bill<<endl;
    }
    return 0;
}