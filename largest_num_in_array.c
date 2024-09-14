#include<stdio.h>

int main(){
     int a[6]={1,23,45,6,9,13},cam=0;
     for (int i = 0; i < 6; i++)
     {
          if (cam<a[i])
          {
               cam=a[i];
          }
          
     }
     printf("largest value of array is = %d ",cam);
return 0;
}