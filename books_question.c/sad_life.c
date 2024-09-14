#include <stdio.h>

int main()
{
    int arr[5] = {5, 7, 12, 9, 2}, l = 0, r = 4, k = 3;
    int array[r + 1],count=0;
    for (int i = 0; i <= r; i++)
    {
        for (int j = 0; j <= r; j++)
        {
            if (l < arr[j] )
            {
                l = arr[j];
                count=j;   
            }
        }
        arr[count]=0;
        array[i] = l;
        l=0;
        count=0;
    }
    for (int i = 0; i <= r; i++)
    {
        printf("%d\t", array[i]);
    }
    return 0;
}