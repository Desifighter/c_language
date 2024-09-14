#include <stdio.h>

int main()
{
int rows;

scanf("%d", &rows); //Number if rows of the triangle is taken from test case
 for(int i=1; i<=rows; i++)
    {
        /* Print trailing spaces */
        for(int j=i; j<rows; j++)
        {
            printf(" ");
        }

        /* Print hollow pyramid */
        for(int j=1; j<=(2*i-1); j++)
        {
            /*
             * Print star for last row (i==rows),
             * first column(j==1) and for
             * last column (j==(2*i-1)).
             */ 
            if(i==rows || j==1 || j==(2*i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            //printf("*");
        }

        /* Move to next line */
        printf("\n");
    }

    return 0;
}
