#include <iostream>
using namespace std;
int main()
/*{
    int arr[]={12,23,13,45,25};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minIndex])
            minIndex=j;
        }
        // Swap the found minimum element with the first element
        swap(arr[i], arr[minIndex]);
    }
    // Print the sorted array
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
}*/
{
    int arr[]={12,23,14,54,24};
    int n=5;
    for(int i=0;i<n-1;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n;j++) //unsorted part
        
        {
            if(arr[j]<arr[minIndex])
            minIndex=j;
        }
        swap(arr[i],arr[minIndex]);

    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}