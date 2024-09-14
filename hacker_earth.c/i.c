#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    scanf("%d", &num);
    int loop = 2 * num - 1, i = 0, digit = 1, space = loop / 2, macho;

    while (loop)
    {

        (loop >= num) ? i++ : i--;

        for (int k = 0; k < abs(space); k++)
        {
            printf(" ");
        }

        macho = 2 * i - 1;
        for (int j = 1; j <= macho; j++)
        {

            if ((macho / 2 + 1) > j)
            {
                printf("%d", digit);
                digit++;
            }
            else
            {
                printf("%d", digit);
                digit--;
            }
        }
        digit = 1;
        printf("\n");

        loop--;
        space--;
    }

    return 0;
}
