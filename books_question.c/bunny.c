#include<stdio.h>
#include<math.h>
int main(){
	int n,answer=1,b=pow(10,9);
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		answer=(answer*arr[i]) % (b+7);

	}
	printf("%d",answer);
   return 0;
}