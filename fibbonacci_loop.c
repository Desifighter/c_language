#include <stdio.h>

int main()
{
    int j = 1, b = 0, terms;
    scanf("%d", &terms);
    for (int i = 0; i < terms; i++)
    {
        if (i >= 1)
        {
            printf("%d term is %d\n",i, j);
            j = j + b;
            b = j - b;
        }

        if (i == 0)
        {
            printf("0 term is 0\n");
        }
    }

    return 0;
}