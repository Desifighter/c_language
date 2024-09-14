#include<stdio.h>

int main(){
     char myname[30];
     int count=0;
     fgets(myname,30,stdin);
     //printf("%c",myname[0]);
     for (int i = 0;myname[i] !='\0'; i++)
     {
          
          count++;
              
          
          
          
     }
     printf("%d",count-1);
     

return 0;
}
