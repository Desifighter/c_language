#include <stdio.h>

int main()
{
     int T, Z, M, N,count=0;
     scanf("%d",&T);
     for (int i = 1; i <= T; i++)
     {    
          scanf("%d %d ",&Z,&M);
          scanf("%d",&N);
          for (int i = 1; i <= M; i++)
          {
               for (int j = 1; j <= N; j++)
               {
                    if ((i*j)==Z)
                    {
                         count++;
                    }
                    
               }
          }
          printf("%d\n",count);
          count=0;
     }

     return 0;
}