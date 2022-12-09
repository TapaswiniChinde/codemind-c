#include<stdio.h>
int main()
{
    float gs,bs,hra,da,pf;
    scanf("%f%f%f",&bs,&hra,&da);
    pf=0.12*bs;
    gs=bs+hra+da+pf;
    printf("%0.2f
%0.2f",pf,gs);
}