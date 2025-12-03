#include <stdio.h>
int main()
{
    int LA[]={10,20,30,40,50};
    int k=5;
    int i=1;
    while(i<=k)
    {
        printf("%d ",LA[i-1]);
        i++;
    }
}