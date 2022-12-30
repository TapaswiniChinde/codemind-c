#include<stdio.h>
int main()
{
    int n,i;
    int f,r;
    scanf("%d",&n);
    int sum=0;
    int temp=n;
    while(n)
    {
        i=1,f=1;
        r=n%10;
        while(i<=r)
        {
            f=f*i;
            i++;
        }
        sum=sum+f;
        n=n/10;
    }
    if(sum==temp)
    printf("The number %d is a strong number",temp);
    else
    printf("The number %d is not a strong number",temp);
}