// #include<stdio.h>

// int main(){
//      int arr[5]={56,24,78,1,29};
//     int temp;
//      for(int i=0;i<5;i++){
//         for (int j = i+1; j <5 ; j++)
//         {
//             if (arr[i]>arr[j])
//             {
                
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
            
//         }
        
        
        
//      }
//      for (int i = 0; i < 5; i++)
//         {
//             printf("%d\n",arr[i]);
//         }
// return 0;
// }
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    
    
    float *area =(float*) malloc(n * sizeof(float));
    for (int i=0; i<n; i++) {
      float p=(tr[i].a+tr[i].b+tr[i].c)/2.0;
      area[i]=sqrt(p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c));
    }
    for (int i=0; i<n-1; i++) {
      for (int j=0; j<n-i-1; j++) {
         if (area[j]>area[j+1]) {
            float t=area[j];
            area[j]=area[j+1];
            area[j+1]=t;
            
            triangle s=tr[j];
            tr[j]=tr[j+1];
            tr[j+1]=s;
         }
      }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}