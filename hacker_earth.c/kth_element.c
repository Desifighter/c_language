// { Driver Code Starts
//Initial Template for C

#include<stdio.h>

 // } Driver Code Ends
//User function Template for C

int kthSmallest(int arr[], int l, int r, int k)
    {
         for (int i = 0; i < k; i++)
         {
            for (int j = 1+i; j <= r; j++)
            {
                if (arr[i]>arr[j])
                {
                    l=arr[i];
                    arr[i]=arr[j];
                    arr[j]=l;
                }
                
            }
            
         }
         return arr[k-1];
         
    }

// { Driver Code Starts.
 
int main()
{
    int test_case;
    scanf("%d",&test_case);
    while(test_case--)
    {
        int number_of_elements;
        scanf("%d", &number_of_elements);
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            scanf("%d", &a[i]);
            
        int k;
        scanf("%d",&k);
        printf("%d",kthSmallest(a, 0, number_of_elements-1, k));
        printf("\n");
    }
    return 0;
}  // } Driver Code Ends