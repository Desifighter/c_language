#include<stdio.h>
int fun(int arr[]){
    arr=arr+1;
    
    printf("%d ",arr[0]);
}
int main(void){
  int arr[3]= {5,10,15};
  fun(arr);
  printf("%d ",arr[0]);
  printf("%d ",arr[1]);


return 0;
}