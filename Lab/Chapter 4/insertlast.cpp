//insert in the end
#include <iostream>
using namespace std;
int main()
{

    int LA[10]={10,20,30,40,50};
    int k=5;
    int value;
    cin>>value;
    for(int i=k-1;i>=0;i--)
    {
        LA[i+1]=LA[i];
    }
    LA[k+1] = value;
    k++;
    for(int i=0;i<k+1;i++)
    {
        cout<<LA[i]<<" ";
    }

}
