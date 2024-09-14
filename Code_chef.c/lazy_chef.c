#include <stdio.h>

int main(void) {
	// your code goes here
    int t,x,m,d;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d %d %d",&x,&m,&d);
        if (x*m<=x+d)
        {
            printf("%d\n",x*m);
        }
        else
        {
             printf("%d\n",x+d);
        }
        
    }
    
	return 0;
}