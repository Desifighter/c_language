#include<stdio.h>
#include<stdlib.h>
int main(){
     int arr_count=5;
     int *arr=(int*)malloc(5*sizeof(int));
     for (int i = 0; i < 5; i++)
     {
         scanf("%d",&arr[i]);
     }
        
     int temp=0;
    
       for (int i=0; i<arr_count; i++)
        {
         for (int j=1+i;j<arr_count; j++) 
         {
         
         if (arr[i]>arr[j]) 
         {
           temp=arr[i];
           arr[i]=arr[j];
           arr[j]=arr[i];
         }
         
         }
       } 
       for (int i = 0; i < 5; i++)
     {
         printf("%d  ",arr[i]);
     }
       
return 0;
}