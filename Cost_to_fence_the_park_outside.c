#include<stdio.h>
int main()
{
    int l,b,w,c,area,o,i;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    o=(l+2*w)*(b+2*w);
    i=(l*b);
    area=o-i;
    area=area*c;
    printf("%d",area);
}