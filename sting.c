#include<stdio.h>
int arsqare(int a){
    return a*a;
}
int ar_reactangle(int a,int b){
    return a*b;
}
float ar_cirle(float a){
    return (22.0/7)*a*a;
}
int main(){
    int side=4,radius=8,breath=5;
    printf("area of square = %d\n",arsqare(side));
    printf("area of circle = %f\n",ar_cirle(radius));
    printf("area of reactangle = %d\n",ar_reactangle(side,breath));

return 0;
}