// Count the number of odd number in array
#include<stdio.h>
void countodd(int arr[],int n);
int main(){
     int arr[5];
     for (int i = 0,j=1; i < 5&&j <= 5; i++,j++)
     {
        printf("Enter %d number \n",j);
        scanf("%d",&arr[i]);

     }
     
     countodd(arr,5);
     
    
     
return 0;
}
void countodd(int *arr,int n){
     int count=0;
     for (int i = 0; i < n; i++)
     {
         if (arr[i]%2!=0)
     {
         count++;
     }
     }
     printf("Number of odd numbers in array = %d\n",count);
}