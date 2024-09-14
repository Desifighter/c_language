#include<stdio.h>

int main(){
     int t,x,y,z;
     scanf("%d",&t);
     while(t--){
     scanf("%d %d %d",&x,&y,&z);
     if(x<y&&x<z){
         printf("DRAW\n");
     }
     else if(y<x&&y<z){
         printf("BOB\n");
     }
     else {
         printf("ALICE\n");
     }
         



     }
return 0;
}