#include<stdio.h>
#include<string.h>
struct checks
{
    char name[100];
};

int main(){
     struct checks gum[100];
     char *jju;

     scanf("%s",jju);
    // printf("%s",jju);
    strcpy(gum[0].name,"jju");

    // printf("%s",gum[0].name);
return 0;
}