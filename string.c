#include<stdio.h>

int main(){
     char firstname[]="keshav",lastname[]="gupta";
    for (int i = 0; i < 6; i++)
    {
        printf("%c",firstname[i]);
    }
    printf(" ");
    for (int i = 0; i < 5; i++)
    {
        printf("%c",lastname[i]);
    }
    
return 0;
}