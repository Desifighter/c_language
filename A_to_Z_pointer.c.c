#include<stdio.h>

int main(){
     char a='a',*d=&a;
     for (int i = 0; i <='z'; i++)
     {
         printf("%c\n",*d);
         *d=(*d)+i;
     }
     

return 0;
}