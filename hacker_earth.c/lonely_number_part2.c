#include <stdio.h>
int lonelyinteger(int a_count, int a[])
{
    int count = 0, i;
    for (i = 0; i < a_count; i++)
    {

        for (int j = 0; j < a_count; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            break;
        }
        count=0;
    }
    return a[i];
}
int main()
{
    int result, n = 1, a[1] = {1};
    result = lonelyinteger(n, a);
    printf("result= %d", result);
    return 0;
}