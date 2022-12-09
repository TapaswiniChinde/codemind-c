#include<stdio.h>
int profit(int p,int l)
{
    if(l>p)
    printf("Profit");
    else
    {
        printf("Loss");
    }
}
int main()
{
    int p,l;
    scanf("%d%d",&p,&l);
    profit(p,l);
}