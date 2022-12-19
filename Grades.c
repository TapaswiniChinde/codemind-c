#include<stdio.h>
int main()
{
    int p;
    scanf("%d",&p);
    if(p>=90)
    {
        printf("Grade A");
    }
    else if(p>=80)
    {
        printf("Grade B");
    }
    else if(p>=55)
    {
        printf("Grade C");
    }
    else if(p>=50)
    {
        printf("Grade D");
    }
    else if(p>=40)
    {
        printf("Grade E");
    }
    else if(p<40)
    {
        printf("Grade F");
    }
}