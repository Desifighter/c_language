#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>

int main(){
     
     float a,b;
     scanf("%f",&a);
     scanf("%f",&b);
     Beep(a,b);
     printf("\a");
     getch();

return 0;
}