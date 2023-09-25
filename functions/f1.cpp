/*Functions are used to execute a statement outside the body of code*/
#include <iostream>
using namespace std;

//function declaration
// first decalre the functions with the return data type and then define it
// define the inputs if you have any, with teh data type
int sum(int a, int b) 
{
    int c = a + b;  //perform the operation
    return c; //return the result
}

int main()
{
    int n1,n2; //declare the variables
    cin>>n1>>n2; //take the input
    cout<<sum(n1,n2)<<endl; //call the function
    return 0; 
}