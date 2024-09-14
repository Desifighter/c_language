#include<stdio.h>
#include<string.h>
int main(){
     char str1[]="nitin";
     int strlen1=strlen(str1);
     printf("strlen1=%d\n",strlen1);
     char str2[strlen1+1];
     int loop=strlen1-1,loop1=loop;
     for (int i = 0; i <= loop1; i++)
     {
         str2[i]=str1[loop];
         loop--;
     }
     str2[strlen(str1)]='\0';
    // printf("%s\n",str2);
     if (!(strcmp(str1,str2)))
     {
         printf("Sentence is palimdrome ");
     }
     else
     {
         printf("Sentence is not palimdrome ");
     }
      
return 0;
}
//able was I ere I saw Elba