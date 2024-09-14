#include<stdio.h>
#include<math.h>
int main(){
    int n,m=1,b;
    printf("Enter number = \n");
    scanf("%d",&n);
    b=n;
    while (n>0)
    {
        m=n*m;
        n--;
    }
    printf("factorial of %d = %d ",b,m);
    
    
    
    


return 0;
}