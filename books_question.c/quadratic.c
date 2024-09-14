#include<stdio.h>
#include<math.h>
int main(){
     int a,b,c;
     float x1,x2,dis;
     //ax2+bx+c
     printf("Enter a = ");
     scanf("%d",&a);
     printf("Enter b = ");
     scanf("%d",&b);
     printf("Enter c = ");
     scanf("%d",&c);
     dis=b*b-4*a*c;
     //printf("%f\n",dis);
    if (dis>=0)
    {
        x1=(-b+sqrt(dis))/2*a;
        x2=(-b-sqrt(dis))/2*a;
        printf("First root = %.1f,second root = %.1f",x1,x2);
    }
    else
    {
        printf("Roots are imaginary");
    }   
    
     
return 0;
}