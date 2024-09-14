#include <stdio.h>

int main(void)
{
    // your code goes here
    int t, a, b;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &b);
        int count = 0;
        for (int i = a; i <= b; i++)
        {
            if (i % 10 == 2 || i % 10 == 3 || i % 10 == 9)
            {
                count++;
            }
        }
        printf("%d\n", count);
        count = 0;
    }

    return 0;
}