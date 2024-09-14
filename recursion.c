#include<stdio.h>
void printhello(int a);
int main(){
     printhello(5);
return 0;
}
void printhello(int a){
    if (a==0)
    {
        return;
    }
    printf("hello world\n");
    printhello(a-1);
    
    
    
    
}