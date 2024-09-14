#include<stdio.h>
char *timeConversion(char *s){
      printf("%s\n",s);
       return s;

}
int main(){

    char *s ="07:05:45PM";
            //0123456789
   // printf("%s\n",s);
   // printf("%d",strlen(s));
    //char *result = timeConversion(s);
    //printf("%s",result);
    timeConversion(s);
     //*(s+7)='\0';
     //printf("%s\n",s);
return 0;
}