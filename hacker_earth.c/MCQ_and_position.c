#include <stdio.h>

int main()
{
    char ans[26], std_ans[3][26];
    int wrong[3][25], count = 0, counts[3];
    printf("Enter answer \n");
    scanf("%s", ans);
    printf("Enter first student answer \n");
    scanf("%s", std_ans[0]);
    
    printf("Enter second student answer \n");
    scanf("%s", std_ans[1]);
    printf("Enter third student answer \n");
    scanf("%s", std_ans[2]);
    

    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i <= 25; i++)
        {
            if (ans[i] != std_ans[j][i])
            {
                wrong[j][count] = i;
                count++;
            }
        }
        counts[j]=count;
        count = 0;
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d score %d out of 25 \n",i+1,25-counts[i]);
        printf("TUMARA\n");
        for (int j = 0; j < counts[i]; j++)
        {
            printf("%d ",wrong[i][j]+1);
        }
        printf("WALA galat hai\n");
        printf("\n");
        
    }
    

    return 0;
}