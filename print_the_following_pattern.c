#include<stdio.h>
void pattern(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i+1;j++)
        printf("%d",j);
        printf("
");
    }
}
int main()
{
    int n; 
    scanf("%d",&n);
    pattern(n);
}