#include<stdio.h>
int sumof_digit(int x);
int main(){
    int annu;
    printf("Enter a number = \n");
    scanf("%d",&annu);
    printf("Sum of digits = %d",sumof_digit(annu));

return 0;
}
int sumof_digit(int x){
    int n,z=0;
    while (x>0)
    {    
        n=x%10;
        x=x/10;
        z=z+n; 
    }
    return z;
    
    
}