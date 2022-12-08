#include<stdio.h>
int main()
{
    int E,M,P,C,CS;
    scanf("%d%d%d%d%d",&E,&M,&P,&C,&CS);
    if(E>34&M>34&P>34&C>34&CS>34)
    {
        printf("PASSED");
    }
    else
    {
        printf("FAILED");
    }
}