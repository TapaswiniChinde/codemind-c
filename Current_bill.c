#include<stdio.h>
void cb(int u)
{
    float uc,b,tb;
    if(u<=200)
    {
        uc=1.20;
    }
    else if(u>=200&&u<=400)
    {
        uc=1.50;
    }
    else
    {
        uc=2.0;
    }
    b=u*uc;
    if(b>400)
    {
        tb=b+b*0.15;
    }
    else
    {
        tb=b+100;
    }
    printf("%.2f",tb);
}
int main()
{
    int u;
    scanf("%d",&u);
    cb(u);
}