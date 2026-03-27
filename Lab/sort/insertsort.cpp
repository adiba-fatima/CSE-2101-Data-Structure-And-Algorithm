#include <iostream>
using namespace std;
void insertsort(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
    int curr,prev;
    curr=arr[i];
    prev=i-1;
    while(prev>=0 && arr[prev]>curr)
    {
        arr[prev+1]=arr[prev];
        prev--;
    }
    arr[prev+1]=curr;
}
}
int main()
{
    int arr[100];
    int n;
    cout<<"number of elements:";
    cin>>n;
    cout <<"Elements:";
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
insertsort(arr,n);
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
}