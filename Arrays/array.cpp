/*Write a c++ program to find the maximum and minimum number form an array. Array should be defined by user*/
#include <stdio.h>
#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (maxNo < arr[i])
        {
            maxNo = arr[i];
        }
        if (minNo > arr[i])
        {
            minNo = arr[i];
        }
        
    }

    cout<< minNo <<" ";
    cout<< maxNo;
    
    return 0;
}
