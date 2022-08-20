#include<stdio.h>
int main()
{
    int n,count=1;
    printf("enter a digit\n");
    scanf("%d",&n);
    if(n&1)
        printf("LSB is %d position\n",count);
        else
        {
        count++; 
        n=n>>1;
        if(n&1)
        printf("LSB is %d position\n",count);
        else
        {
        count++; 
        n=n>>1;
        if(n&1)
        printf("LSB is %d position\n",count);
        else
        {
        count++; 
        n=n>>1;
        if(n&1)
        printf("LSB is %d position\n",count);
        else
        {
        count++; 
        n=n>>1;
        }
        }
        }
        }
    return 0;
}