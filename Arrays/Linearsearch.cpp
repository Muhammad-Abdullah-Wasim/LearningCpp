#include <iostream>

using namespace std;

int linearSearch(int n,int arr[], int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            return i;
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
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout<<"Provide key"<<endl;
    int key;
    cin >> key;

    cout<<linearSearch(n,arr,key)<<endl;
    
    return 0;
}