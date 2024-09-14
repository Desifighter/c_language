#include<stdio.h>
int sum(int a);
int main(){
     printf("Sum of n natural number =%d \n",sum(10));
return 0;
}
int sum(int a){
    if (a==1)
    {
        return 1;
    }
    
    a=a+sum(a-1);
    return a;
}