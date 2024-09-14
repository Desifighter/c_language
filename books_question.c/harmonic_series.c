#include<stdio.h>

int main(){
     typedef int value_of_n;
     typedef float asd;
     value_of_n n;
     asd sum=1;
     printf("Enter value of n = \n");
     scanf("%d",&n);
     for (int i = 1,j=1; i <n&&j<n; i++,j++)
     {
          sum=sum+(1.0/(j+1));
          //printf("%d\n",i);
     }
     printf("%.2f",sum);

return 0;
}
// #include<stdio.h>

// int main(){
//      int n;
//      float sum=1.0;
//      scanf("%d",&n);
//      for(int i=1;i<n;i++)
//      {
//           sum=sum+(1.0/(i+1));
//      }
//      printf("%f",sum);
// return 0;
// }