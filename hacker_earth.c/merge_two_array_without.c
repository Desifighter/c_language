#include<stdio.h>

int main(){
     int size1,size2,count=0;
     scanf("%d",&size1);
     int a[size1];
     for(int i=0;i<size1;i++){
           scanf("%d",&a[i]);
     }
     scanf("%d",&size2);
     int b[size2];
     for(int i=0;i<size2;i++){
           scanf("%d",&b[i]);
     }
     int c[size1+size2];
      for(int i=0;i<size1;i++){
           c[i]=a[i];
     }
     for(int i=size1,j=0;i<size1+size2,j<size2;i++,j++){
           label:
           for (int k = 0; k < size1; k++)
           {
               if (a[k]==b[j])
               {
                   j++;
                   goto label;
               }   
           }   
           c[i]=b[j];
           count++;
     }
     for (int i = 0;i<size1+count; i++)
     {
         printf("%d\t",c[i]);
     }
     
return 0;
}