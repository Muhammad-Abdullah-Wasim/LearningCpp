/*Certainly! The break and continue statements are control flow statements used in programming to alter the normal flow of control within loops (like for, while, and do-while) and switch statements. They serve different purposes:

break Statement:

The break statement is primarily used to exit or terminate the nearest enclosing loop (either a for, while, or do-while loop) prematurely, without completing the remaining iterations.
When a break statement is encountered within a loop, the program immediately jumps out of that loop and continues with the code after the loop.
It is often used when a certain condition is met, and you want to exit the loop early. For example, you might use break to exit a loop when you find a specific item in a list or when a certain error condition occurs.*/

#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    while (i <= 10)
    {
        if (i == 5)
        {
            i++;
            break;
        }
        cout << i << endl;
        i++;
    }
    return 0;
}
