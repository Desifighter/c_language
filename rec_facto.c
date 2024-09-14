#include<stdio.h>
int facto(int a);
int main(){
     printf("Factorial of c = %d",facto(3
     
     ));
return 0;
}
int facto(int a){
    if (a==1)
    {
        return 1;
    }
    a=a*facto(a-1);
    return a;
    
}
