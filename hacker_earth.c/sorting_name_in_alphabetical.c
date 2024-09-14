#include<stdio.h>
#include<string.h>
int main(){
     char names[][10]={
         "dom",
         "abhinav",
         "carry",
         "bebeto"
         },temp[10];

     for (int i = 0; i < 4; i++)
     {
        for (int j = 1+i; j < 4; j++)
        {
            if (strcmp(names[i],names[j])==1)
            {
                strcpy(temp,names[j]);
                strcpy(names[j],names[i]);
                strcpy(names[i],temp);
            }
            
        }
        
        
     }
     for (int i = 0; i < 4; i++)
     {
        printf("%s\n",names[i]);
     }
     
     
    

return 0;
}