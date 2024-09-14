#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 3, digit = 1;
    int **arr = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        *(arr + i) = malloc(n * (sizeof(int)));
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = digit;
            digit++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    int sum1 = 0, sum2 = 0, diff = 0, k = 0, j = n-1;
    for (int i = 0; i < n; i++)
    {
        sum1 = sum1 + arr[i][i];
    }
    while (k < n)
    {
        sum2 = sum2 + arr[j][k];
        k++;
        j--;
    }

    diff = abs(sum1 - sum2);
    int res = diff;

    printf("%d", res);
    return 0;
}