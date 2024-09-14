#include <stdio.h>

int main()
{
     int row, col;
     printf("Enter row = \n");
     scanf("%d", &row);
     printf("Enter columns = \n");
     scanf("%d", &col);
     int matrix1[row][col], matrix2[row][col],matrix3[row][col];
     printf("--------------MATRIX-1-----------------\n");
     for (int i = 0, k = 1; i < row && k <= row; i++, k++)
     {
          for (int j = 0, m = 1; j < col && m <= col; j++, m++)
          {

               printf("Enter matrix1 element A[%d][%d]:", k, m);
               scanf("%d", &matrix1[i][j]);
          }
     }
     printf("--------------MATRIX-2-----------------\n");
     for (int i = 0, k = 1; i < row && k <= row; i++, k++)
     {
          for (int j = 0, m = 1; j < col && m <= col; j++, m++)
          {

               printf("Enter matrix2 element A[%d][%d]:", k, m);
               scanf("%d", &matrix2[i][j]);
          }
     }
     printf("\n");
     for (int i = 0, k = 1; i < row && k <= row; i++, k++)
     {
          for (int j = 0, m = 1; j < col && m <= col; j++, m++)
          {
               printf("%d\t", matrix1[i][j]);
          }
          printf("\n");
     }
     printf("\n\t+\t\n\n");
     for (int i = 0, k = 1; i < row && k <= row; i++, k++)
     {
          for (int j = 0, m = 1; j < col && m <= col; j++, m++)
          {
               printf("%d\t", matrix2[i][j]);
          }
          printf("\n");
     }
     printf("\n\t=\t\n\n");
     for (int i = 0, k = 1; i < row && k <= row; i++, k++)
     {
          for (int j = 0, m = 1; j < col && m <= col; j++, m++)
          {

               matrix3[i][j]=matrix2[i][j]+matrix1[i][j];
          }
     }
     for (int i = 0, k = 1; i < row && k <= row; i++, k++)
     {
          for (int j = 0, m = 1; j < col && m <= col; j++, m++)
          {
               printf("%d\t", matrix3[i][j]);
          }
          printf("\n");
     }
     
     return 0;
}