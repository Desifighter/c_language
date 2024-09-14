#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Complete the following function.
void calculate_the_maximum(int n, int k)
{
    int count1 = 0, count2 = 0, count3 = 0, compare;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            compare = i & j;

            if (compare > count1 && compare < k && i != j)
            {
                count1 = compare;
            }
        }
    }
    printf("%d\n", count1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            compare = i | j;
            if (compare > count2 && compare < k && i != j)
            {
                count2 = compare;
            }
        }
    }
    printf("%d\n", count2);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            compare = i ^ j;

            if (compare > count3 && compare < k && i != j)
            {
                count3 = compare;
            }
        }
    }
    printf("%d", count3);
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
