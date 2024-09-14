/*
    1
   232
  34543
 4567654
567898765
*/
#include <stdio.h>

int main()
{
    char str[] = "123456789";
    int digit, innerloop,space=4;

    for (int i = 1; i <= 5; i++)
    {
        for (int k = space; k; k--)
        {
            printf(" ");
        }
        
        digit = i-1;
        innerloop = 2 * i - 1;
        for (int j = 0; j < innerloop; j++)
        {

            if ((innerloop / 2 + 1) > j)
            {    
                digit++;
                printf("%d", digit);
                
            }
            else
            {
                digit--;
                printf("%d", digit);
            }
        }
        printf("\n");
        space--;
    }
    return 0;
}