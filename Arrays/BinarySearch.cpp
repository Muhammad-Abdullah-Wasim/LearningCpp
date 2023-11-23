/*Write a program to search with binary search in an array*/
#include <iostream>
using namespace std;

int BinarySearch(int arr[],int key, int n)
{
    int s = 0;
    int e = n;
    while (s<=e)
    {
        int mid = (s+e)/2;
        if (arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s = mid+1;
        }

    }

    return -1;    
}
int main()
{
    int n;
    cout<<"Provide the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Provide the components of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Provide the key"<<endl;
    cin>>key;
    cout<<BinarySearch(arr,key,n)<<endl;
    
}