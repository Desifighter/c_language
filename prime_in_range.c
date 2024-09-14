#include <stdio.h>
int main()
{
   int row, col = 0, mnb, cute;
   printf("Enter num = \n");
   scanf("%d", &row);
   for (int j = 1; j <= row; j++)
   {
      // printf("value of row = %d\n",j);
      for (int i = 1; i <= j; i++)
      {

         cute = j % i;

         // printf("value of cute = %d\n",cute);
         if (cute == 0)
         {
            col++;
         }
      }
      // printf("value of col = %d\n",col);
      if (row == 1||col==1)
      {
         printf("%d is not a prime nor composite number\n",j);
      }

      else if (col == 2)
      {
         printf("%d is prime number\n", j);
      }
      else if (col != 2)
      {
         printf("%d is not prime number\n ", j);
      }
      col=0;
   }

   return 0;
}
