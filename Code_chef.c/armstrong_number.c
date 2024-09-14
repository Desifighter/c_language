#include <stdio.h>
#include <math.h>
int main()
{
    int num, first,fast ,p, n, j = 0, digit = 0;
    printf("Enter a number = \n");
    scanf("%d", &num);
    first = num;
    fast=num;
    // 153=1*1*1+5*5*5+3*3*3;
    // 1
    //
    while (fast > 0)
    {
        fast = fast / 10;
        digit++;
    }
    //printf("value of digit =%d", digit);

    while (num > 0)
    {
        // printf("%d\n",num);
        if (num >= 1)
        {
            p = num % 10;
            n = pow(p, digit);
            j = n + j;
        }

        num = num / 10;
    }
    // printf("first = %d\n",first);
    if (j == first)
    {
        printf("%d is Armstrong number ", first);
    }

    else
    {
        printf("%d not is Armstrong number ", first);
    }

    // printf("value of j = %d",j);

    return 0;
}