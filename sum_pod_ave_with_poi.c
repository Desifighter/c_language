#include<stdio.h>
void mast(int a,int b,int *sum,int *product,float *average);
int main(){
     int a=4,b=3,sum,product;
     float average;
     mast(a,b,&sum,&product,&average);
     printf("sum of %d and %d = %d \n",a,b,sum);
     printf("product of %d and %d = %d\n",a,b,product);
     printf("average of %d and %d = %.1f\n",a,b,average);
return 0;
}
void mast(int a,int b,int *sum,int *product,float *average){
      *sum=a+b;
      *product=a*b;
      *average=(a+b)/2.0;
}