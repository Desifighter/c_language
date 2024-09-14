#include<stdio.h>
void present(char word[],char a);
int main(){
     char word[]="keshav gupta";
     char a;
     scanf("%c",&a);
     present(word,a);
return 0;
}
void present(char word[],char a){
    int z=0;
    for (int i = 0; word[i] !='\0'; i++)
    {
        if (word[i]==a)
        {
            z++;
        }
        
    }
    if (z>0)
    {
        printf("present ");
    }
    else
    {
        printf("not present ");
    }
    
    
   
}