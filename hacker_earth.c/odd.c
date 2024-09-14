// MULTIPLICACTION OF TWO MATRIXS
#include<stdio.h>

int main(){
     int row1,column1,row2,column2;
     printf("Enter size = \n");
     scanf("%d",&row1);
     row2=column1=column2=row1;
     //printf("row2=%d column1= %d column2= %d row1= %d",row2,column1,column2,row1);
    // printf("Enter first matrix row and column \n");
    // scanf("%d %d",&row1,&column1);
     //printf("Enter second matrix row and column \n");
     //scanf("%d %d",&row2,&column2);
     int a[row1][column1],b[row2][column2],multi[row1][column2];
     
     printf("--------------------MATRIX-1----------------------------\n");
     for (int i = 0; i < row1; i++)
     {
       for (int j = 0; j < column1; j++)
     {
       printf("Enter a[%d][%d]\n",i,j);
       scanf("%d",&a[i][j]);
     }
     }
     printf("--------------------MATRIX-2----------------------------\n");
     for (int i = 0; i < row2; i++)
     {
       for (int j = 0; j < column2; j++)
     {
       printf("Enter b[%d][%d]\n",i,j);
       scanf("%d",&b[i][j]);
     }
     }
     printf("--------------------MATRIX-1----------------------------\n");
      for (int i = 0; i < row1; i++)
     {
       for (int j = 0; j < column1; j++)
     {
       printf("%d\t",a[i][j]);
     }
     printf("\n");
     }
     printf("--------------------MATRIX-2----------------------------\n");
     for (int i = 0; i < row2; i++)
     {
       for (int j = 0; j < column2; j++)
     {
       printf("%d\t",b[i][j]);
     }
     printf("\n");
     }
     
    // CALCULATIONS 
    for (int i = 0; i < row1; i++)
    {
      
      for (int j = 0; j <row1 ; j++)
      {
        multi[i][j]=0;
        for (int k = 0; k <row1 ; k++)
        {

          printf("\nI = %d J = %d    K =%d \n",i,j,k);
          multi[i][j]=multi[i][j]+a[i][k]*b[k][j];
          printf("\nmulti[%d][%d]=multi[%d][%d]+a[%d][%d]*b[%d][%d]=%d\n",i,j,i,j,i,k,k,j,multi[i][j]);
        }
        
      }
      
    }
    

    









    printf("-------------------RESULT-MATRIX-------------------------\n");
     for (int i = 0; i < row1; i++)
     {
       for (int j = 0; j < column2; j++)
     {
       printf("%d\t",multi[i][j]);
     }
     printf("\n");
     }
     
  end:   
return 0;
}