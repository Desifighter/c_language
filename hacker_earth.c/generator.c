#include<stdio.h>

int main(){
     /*
     1-->1       -->1
     2-->121     -->3
     3-->12321   -->5
     */
    // 1 2 3 4 5
    // 5/2=2.5
    int digit=1;
    int macho=3;
    for (int i = 1; i <=macho; i++)
    {
        if ((macho/2+1)>i)
        {
            printf("%d ",digit);
            digit++;
        }
        else
        {
            printf("%d ",digit);
            digit--;
        }

    
        
    }
    

return 0;
}