#include <stdio.h>

int main()
{
    int num,digit=1;
    scanf("%d", &num);
    for (int i = 1; i <= (2 * num - 1); i++)
    {

        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("%d",digit);
        }
        printf("\n");
    }
    return 0;
}