#include <iostream>//insert after given data
using namespace std;
int main()
{
    int LA[10]={10,20,30,40,50};
    int k=5;
    int pos,givenvalue,newdata;
    cin>>givenvalue>>newdata;
    for(pos=0;pos<k;pos++)
    {
        if(LA[pos]==givenvalue)
        {
            break;
        }
    }
    for(int i=k;i>pos+1;i--)
    {
        LA[i]=LA[i-1];
    }
    LA[pos+1]=newdata;
    k++;
    for(int i=0;i<k;i++)
    {
        cout<<LA[i]<<" ";
    }
}