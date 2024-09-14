#include<stdio.h>

int main(){
     char names[4][50];
     int marks[4];
     for(int i=0;i<2;i++){
         printf("Enter name(%d)= ",i+1);
         scanf("%s",names[i]);
         printf("Enter marks(%d) = ",i+1);
        scanf("%d",&marks[i]);
          
     }
     for(int j=0;j<2;j++){
         printf("%d Student name-%s and marks=%d\n",j+1,names[j],marks[j]);
     }
     int temp=marks[0];
     int naam_ke_liye=0;
     for (int i = 1; i < 4; i++)
     {    
         temp=temp>marks[i]?temp:marks[i];
         naam_ke_liye=temp>marks[i]?naam_ke_liye:i;
     }
     
     printf("TOPPER OF THE CLASS IS  %s  AND HIS MARKS IS = %d",names[naam_ke_liye],temp);

return 0;
}