#include<stdio.h>
#include<math.h>
int main()
{
    double h,m;
    float a,b;
    scanf("%lf:%lf",&h,&m);
    a=abs((30*h)-(5.5*m));
    b=360-a;
    if(a<b)
    {
    printf("%.1lf",a);
    }
    else
    {
    printf("%.1lf",b);
    }
}