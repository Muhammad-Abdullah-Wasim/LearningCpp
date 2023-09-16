/*Creating a simple adition program using Input Output*/
#include <iostream> //This is a header file
using namespace std;   //This is a preprocessor directive
int main() 
{
    int a,b; //This is a variable declaration statement 
    cout << "Enter two numbers: "; //This is a output statement
    cin >> a >> b; //This is a input statement
    cout << "The sum of the two numbers is: " << a+b << endl; //This is a output statement 
    return 0;
}