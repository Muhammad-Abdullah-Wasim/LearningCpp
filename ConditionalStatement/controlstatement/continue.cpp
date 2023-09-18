/*Certainly! The break and continue statements are control flow statements used in programming to alter the normal flow of control within loops (like for, while, and do-while) and switch statements. They serve different purposes:
continue Statement:

The continue statement is used to skip the current iteration of a loop and move to the next iteration. It doesn't terminate the loop like break does; instead, it continues with the next iteration.
It's typically used when you want to skip a specific iteration of a loop based on a condition without exiting the loop entirely.*/

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
            continue;
        }
        cout << i << endl;
        i++;
    }
    return 0;
}