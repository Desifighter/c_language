#include<stdio.h>

int main(){
     char str[]="cprogramming";
     //printf("%-12.6s",str);
     for (int i = 1; i <= 12; i++)
     {
         printf("%*.*s\n",12,i,str);
     }
     for (int i = 12; i ; i--)
     {
         printf("%*.*s\n",12,i,str);
     }
     
     
return 0;
}