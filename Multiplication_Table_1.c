#include <stdio.h>

int main()
{
    int i, num;

    
    scanf("%d", &num);

    for(i=1; i<=12; i++)
    {
        printf("%d x %d = %d
", num, i, (num*i));
    }

    return 0;
}
