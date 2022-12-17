#include<stdio.h>
int main()
{
    int num, digit, sum =0;
    scanf("%d",&num);
    int square = num*num;
    while(square!=0)
    {
        digit = square%10;
        sum += digit;
        square = square/10;
    }
    
    if(sum == num)
        printf("Neon Number");
    else
        printf("Not Neon Number");
 
    
}

