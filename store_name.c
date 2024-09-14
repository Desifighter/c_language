#include<stdio.h>

int main(){
     char names[5][100],name[100];
     for(int i=0;i<5;i++){
         scanf("%s",names[i]);
        //  fgets(names[i],100,stdin);
         }
     for(int i=0;i<5;i++){
         printf("%s\n",names[i]); }
    // scanf("%[^\n]s",names[2]);
    // printf("%s",name[2]);   
         
return 0;
}