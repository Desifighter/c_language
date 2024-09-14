#include<stdio.h>

int main(){
     char first_name[]="rama",middle_name[]="pati",last_name[]="luhiya",full_name[20];
     int i,j=0,k=0;
     for(i=0;first_name[i] != '\0';i++){
         full_name[i]=first_name[i];
     }
     full_name[i]=' ';
     i++;
     while (middle_name[j] != '\0')
     {
        full_name[i]=middle_name[j];
        j++;
        i++;
     }
     full_name[i]=' ';
     i++;
     while (last_name[k] != '\0')
     {
        full_name[i]=last_name[k];
        k++;
        i++;
     }

     
     
     printf("%s",full_name);
return 0;
}