#include<stdio.h>

int main(){
     char str[100]="keshav";
     //str[6]='a'; 
     for (int i = 0;str[i] != '\0'; i++)
     {
         printf("%c",str[i]);
     }
     
     
return 0;
}