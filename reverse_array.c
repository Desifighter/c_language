#include<stdio.h>
void reverse(int a[],int n);
int main(){
     int a[4];
     for(int i=0,j=1;i<4&&j<=4;i++){
         printf("Enter %d element = ",j);
         scanf("%d",&a[i]);
     }
    reverse(a,4);
    for(int i=0,j=1;i<4&&j<=4;i++){
         printf("rev %d element = %d\n",j,a[i]);
     }
return 0;
}
void reverse(int a[],int n){
     for (int i = 0; i < n/2; i++)
     {
         int firstvalue=a[i];
         int secondvalue=a[n-i-1];
         a[i]=secondvalue;
         a[n-i-1]=firstvalue;

     }
     
}