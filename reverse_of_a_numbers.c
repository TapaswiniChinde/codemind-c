#include<stdio.h>
int main()
{
    int n,tem,rev=0;
    scanf("%d",&n);
    while(n!=0)
    {
        tem=n%10;
        rev=rev*10+tem;
        
        n/=10;
        
    }
    printf("%d",rev);
}