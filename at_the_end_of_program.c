#include<stdio.h>
void replace(int a[],int n);
void sumc(int a[],int n);
int main(){
     int a[5]={3,5,6,7,6},b,c;
     replace(a,5);
     sumc(a,5);
return 0;
}
void replace(int a[],int n){
    int yes,which,end;
     for (int i = 0; i < n; i++)
     
     {
         printf("you want to change any element if yes then enter 1 or enter 0 for no : \n");
         scanf("%d",&yes);
         if (yes==1)
         {
             printf("Which place of element you want to change (1 to %d):\n",n);
             scanf("%d",&which);
             printf("type value for replace :\n");
             scanf("%d",&end);
             a[(which-1)]=end;

         }
         else
         {
            break;
         }
         
         
     }
     
     
}
void sumc(int a[],int n){
      int v=0;
      for (int i = 0; i < n; i++)
      {
          v=v+a[i];
      }
      printf("Sum of elements = %d \n",v);
      
}