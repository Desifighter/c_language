#include<stdio.h>
#include<math.h>
float square_root(int a);
int main(){
    int x;
    printf("Enter a number = \n");
    scanf("%d",&x);
    printf("Square_root of number = %.2f",square_root(x));
return 0;
}
float square_root(int a){
    double c;
    c=pow(a,(.5));
    return c;
 
}