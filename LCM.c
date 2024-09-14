#include<stdio.h>
int main(){
     int a,b,temp,M,P;
     scanf("%d",&a);
     scanf("%d",&b);
     M=a;
     P=b;
     printf("Enter a=%d ,b=%d",a,b);
     if (a>b)
     {
          temp=a;
          a=b;
          b=temp;
     }
     for (int i = 1; ; i++)
     {
        temp=a*i;
         if (temp%b==0)
         {
             printf("\nLCM = %d ",temp);
             break;
         }
         
     }
     
return 0;
}