#include<stdio.h>
int main(){
int row,col=0,mnb,cute;
char star='*';
printf("Enter num = \n");
scanf("%d",&row);
for (int i = 1; i <= row; i++)
{
   
   cute=row%i;
   
   //printf("value of cute = %d\n",cute);
   if (cute==0)
   {
      col++;
   }
   
   
}
 //printf("value of col = %d\n",col);
 if (row==1)
 {
    printf("not a prime nor composite number");
 }
 
else if (col==2)
{
   printf("%d is prime number ",row);
}
else if (col!=2)
{
   printf("%d is not prime number ",row);
}
return 0;
}
