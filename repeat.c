#include<stdio.h>

int main(){
     int an[5]={1,2,4,6,2},count=0,n;
     printf("Enter a number = ");
     scanf("%d",&n);
     for (int i = 0; i < 5; i++)
     {
        if (n==an[i])
        {
            count++;
        }
        
     }
     printf("\n%d comes %d times ",n,count);
     
return 0;
}