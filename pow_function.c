#include<stdio.h>
double power(double a,double b);
int main(){
     double a,b;
     printf("enter base = \n");
     scanf("%lf",&a);
     printf("enter power = \n");
     scanf("%lf",&b);
     printf("%lf to the power %lf = %lf",a,b,power(a,b));
return 0;
}
double power(double a,double b){
        int i=1,v;
        while (b>0)
        {   
            i=a*i;  
            b--;
        }
        return i;
}