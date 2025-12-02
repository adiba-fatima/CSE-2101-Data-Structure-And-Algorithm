#include <iostream>//complexity o(n^2)
using namespace std;
void bubblesort(int LA[],int n)
{
    for(int i=0; i<n-1;i++)
    {
        bool isswapped=false; //(optimising)deciding if the array is already sorted. if not then the loop will be skipped and already sorted arrays will not run the loops
        for(int j=0; j<n-i-1;j++)
        {
            if(LA[j]>LA[j+1])
            {
                swap(LA[j],LA[j+1]);
                isswapped=true;
            }
        }
        if(!isswapped)
            break;
    }
}
void printarray(int LA[],int n)
{
    for(int i=0; i<n;i++)
    {
        cout<<LA[i]<<" ";
    }
}
int main()
{
    int LA[]={64,34,25,12,22,11,90};
    int n=sizeof(LA)/sizeof(LA[0]);
    bubblesort(LA,n);
    cout<<"Sorted array: \n";
    printarray(LA,n);
    return 0;

}
