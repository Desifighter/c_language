#include <stdio.h>
#include <string.h>
typedef struct address
{
    int house_no;
    int block;
    char city[100];
    char state[100];
} addr;

int main()
{
    addr detail[3];
    char copy[100];
    for (int i = 1, j = 0; i <= 2, j < 2; i++, j++)
    {
        printf("(%d) Enter house number = ", i);
        scanf("%d", &detail[i].house_no);
        printf("(%d) Enter block number = ", i);
        scanf("%d", &detail[i].block);
        printf("(%d) Enter city = ", i);
        scanf("%s", copy);
        strcpy(detail[i].city, copy);
        printf("(%d) Enter state = ", i);
        scanf("%s", copy);
        strcpy(detail[i].state, copy);
    }

        // printf("(1) Enter house number = ");
        // scanf("%d", &detail[0].house_no);
        // printf("(1) Enter block number = ");
        // scanf("%d", &detail[0].block);
        // printf("(1) Enter city = ");
        // scanf("%s", copy);
        // strcpy(detail[0].city, copy);
        // printf("(1) Enter state = ");
        // scanf("%s", copy);
        // strcpy(detail[0].state, copy);

        // printf("(2) Enter house number = ");
        // scanf("%d", &detail[1].house_no);
        // printf("(2) Enter block number = ");
        // scanf("%d", &detail[1].block);
        // printf("(2) Enter city = ");
        // scanf("%s", copy);
        // strcpy(detail[1].city, copy);
        // printf("(2) Enter state = ");
        // scanf("%s", copy);
        // strcpy(detail[1].state, copy);
        
printf("\n**************************************************************************************\n");
           for (int k = 0,j=1; k < 2,j<=2; k++,j++)
   {
       printf("(%d) house number = %d\n",j,detail[k].house_no);
       printf("(%d) block number = %d\n",j,detail[k].block);
       printf("(%d) city = %s\n",j,detail[k].city);
       printf("(%d) state = %s\n",j,detail[k].state);
   }
        

    return 0;
}