#include<stdio.h>
int main()
{
    int x,n;
    printf("enter a three digit number\n");
    scanf("%d",&n);
    x=n%10*100;
    n=n/10;
    x=n+x;
    printf("%d",x);
    return 0;
}