#include <iostream>
using namespace std;
int main()
{
    int LA[]={2,5,2,2,3,4,2,4,7,9,4};
    int k=11;
    int value;
   /* for(int i=1; i<=k;i++)
    {
     LA[i]=value;
    
     if(LA[i]==value)
    
     {
         for(int j=i;j<k;j++)
         {
             LA[j]=LA[j+1];
         }
         k--;
         i--;
     }
    }*/
  /* for(int i=0; i<k;i++)
   {
    LA[i]=value;
   //}
   for(int j=0;j<k;j++)
   {
    if(LA[j]==value)
    {
        for(int m=j;m<k;m++)
        {
            LA[m]=LA[m+1];
        }
        k--;
        j--;
    }
   }
}*/
for (int i=0;i<k;i++)
{
    for(int j=i+1;j<k;j++)
    {
        if(LA[i]==LA[j])
        {
            for(int m=j;m<k;m++)
            {
                LA[m]=LA[m+1];
            }
            k--;
            j--;
        }
    }
}
    for(int i=0;i<k;i++)
    {
        cout<<LA[i]<<" ";
    }
}