#include <stdio.h>

int main()
{
    typedef int count;
    count positive = 0, negative = 0;
    int num;
    printf("Enter number \n");
    scanf("%d",&num);
    for (int i = 0; num != 0; i++)
    {
        if (num > 0)
        {
            positive++;
        }
        else
        {
            negative++;
        }
        printf("Enter number or enter 0 for exit program\n");
        scanf("%d", &num);

    }
    printf("you entered %d positive number & %d negative ", positive, negative);

    return 0;
}