#include<stdio.h>
#include<math.h>
int main(){
     int num=30,bin=0;
     for(int i=0;num != 0;i++){
         bin=bin+(num%2)*pow(10,i);
         num=num/2;
     }
   printf("BINARY OF 30 = %d ",bin);

return 0;
}