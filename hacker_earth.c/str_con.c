#include<stdio.h>

int main(){
     char str1[20]="rama ",str2[]="pati ",str3[]="luhiya";
     strcat(strcat(str1,str2),str3);
     printf("%s",str1);
return 0;
}