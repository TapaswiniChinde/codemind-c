#include<stdio.h>
int main()
{
    int n,rev=0,tem;
    scanf("%d",&n);
    while(n!=0)
    {
        tem=n%10;
        rev=rev*10+tem;
        n/=10;
    }
    printf("%d",rev);
}