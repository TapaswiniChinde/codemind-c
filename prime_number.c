#include <stdio.h>

int main()

{

    int i, num, temp = 0; 



    scanf("%d", &num);

    // iterate up to n/2.

    for (i = 2; i <= num / 2; i++)

    {

        // check if num is divisible by any number.

        if (num % i == 0)

        {

            temp++;

            break;

        }

    } 

    // check for the value of temp and num. 

    if (temp == 0 && num != 1)

    {

        printf("prime");

    }

    else

    {

        printf("not a prime");
   }

    return 0;

}

