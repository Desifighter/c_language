#include<stdio.h>

int main(){
    typedef int days;
    days num;
    int years,week;
    printf("Enter days = \n");
    scanf("%d",&num);
printf("%d days = %d weeks",num,num/4);
printf("%d days = %d years",num,num/365);
printf("%d days = %d days",num,num)  ;  

return 0;
}