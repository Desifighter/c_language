#include<stdio.h>

int main(){
     int element[100],count=0;
     float mean=0,variance=0,stdeviation,deviation;
     for(int i=0;i<100;i++){
         printf("Enter element or type 99999 for exit element entering \n");
         scanf("%d",&element[i]);
         
         mean=mean+element[i];
         
         if(element[i]==99999){
             count=i;
             mean=(mean-99999)/count;
             break;}
             
     }
     for (int i = 0; i < count; i++)
     {
         deviation=(element[i]-mean);
         variance+= (deviation*deviation);
     }
     variance=variance/count;
     stdeviation=sqrt(variance);
     printf("\nNumber of element = %d \nMEAN= %f\nStandard deviation = %.2f\n",count,mean,stdeviation);


return 0;
}