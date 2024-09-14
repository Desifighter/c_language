#include<stdio.h>
void swap(int *x,int *y);
int main(){
    int a=4,b=3;
    printf("value of a = %d & value of b = %d\n",a,b);
    //printf("address of a = %u & address of b = %u\n",&a,&b);
    swap(&a,&b);
    printf("value of a = %d & value of b = %d\n",a,b);
     
return 0;
}
void swap(int *x,int *y){
    int *z;
    int fun=9;
    z=&fun;
    *z=*y;
    *y=*x;
    *x=*z;
    //printf("value of a = %d & value of b = %d\n",*x,*y);
    //*x=4*(*x);
    //*y=4*(*y);
}