#include<stdio.h>
#include<math.h>

int main(){
     int n,count=0,m,myop,gp;
     printf("Enter a digit =");
     scanf("%d",&n);
     m=n;
     for (int i = 0;m>0; i++)
     {
         m=m/10;
         count++;
     }
     myop=count;
     //printf("%d",count);
     for (int i = 0; i < count; i++)
     {  
         printf("count = %d\n",count);
         printf("%d\n",n);
         myop--;
         printf("myop = %d\n",myop);
         gp=pow(10,myop);
         printf("gp = %d\n",gp);
         for (int i = 0;n>gp; i++)
         {
             n=n-gp;
         }     
     }
     
     
return 0;
}