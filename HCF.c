#include<stdio.h>

int main(){
     int a,b,temp;
     scanf("%d",&a);
     scanf("%d",&b);
     printf("Enter a=%d ,b=%d",a,b);
     if (a>b)
     {
          temp=a;
          a=b;
          b=temp;
     }
     while (b%a != 0)
     {
             temp=a;          a=b%a;b=temp;
     }
     printf("\nHCF = %d",a);
     
return 0;
}