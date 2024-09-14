#include <stdio.h>

int main(void) {
	// your code goes here
	int T,N,X,P;// T=test case  N= num of question X= correct ans P = passing marks
	scanf("%d",&T);
	while(T--){
	    scanf("%d",&N);
	    scanf("%d",&X);
	    scanf("%d",&P);
	    //int marks=3*X+(N-X)*(-1);
	    if((3*X+(N-X)*(-1))>=P){
	        printf("PASS\n");}
	    else
	       { printf("FAIL\n");}
	    
	    
	}
	return 0;
}