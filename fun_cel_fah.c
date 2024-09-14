#include<stdio.h>
float temp(int a){
    float b;
    b=(9.0/5)*a+32;
    return b;
}
int main(){
     printf("%.1f\n",temp(1));
return 0;
}