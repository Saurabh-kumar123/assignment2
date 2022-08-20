#include<stdio.h>
int main()
{
    int a,sum=0,m;
    printf("enter a three digit number\n");
    scanf("%d",&a);
    m=a%10;
    sum=sum+m;
    a=a/10;
    m=a%10;
    sum=sum+m;
    a=a/10;
    m=a%10;
    sum=sum+m;
    printf("sum is %d",sum);
    return 0;
}