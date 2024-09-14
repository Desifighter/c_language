#include<stdio.h>
int fibb(int a);
int main(){
     printf("nth term of fibbonacci = %d\n",fibb(6));
return 0;
}
int fibb(int a){
     if(a==2){
        return 1;
    }
    else if (a==1)
    {
        return 0;
    }
    a=fibb(a-1)+fibb(a-2);
    return a;
    
};