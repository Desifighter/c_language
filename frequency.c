#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char *s;
    int count=0;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    for (int i = 48; i <=57; i++)
    {
        for (int j = 0; j<strlen(s); j++)
    {
         if (s[j]==i)
         {
            count++;
         }
         
    }
    printf("%d\t",count);
    count=0;
    }
        
        
    
     
    return 0;
}
