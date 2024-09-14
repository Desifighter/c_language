// { Driver Code Starts
// Initial Template for C

#include <stdio.h>

// } Driver Code Ends
// User function Template for C

int kthSmallest(int arr[], int l, int r, int k)  //(.... , int l=0, int r=  ,int k)
{
    int array[r + 1], count = 0,mom=0;
    for (int i = 0; i <= r; i++)
    {
        for (int j = 0; j <= r; j++)
        {

            if (l < arr[j])
            {
                l = arr[j];
                count = j;
            }
        }
        arr[count] = 0;
        array[i] = l;
        l=0;
        count = 0;
    }
    mom=array[r + 1 - k];
return mom;
}

// { Driver Code Starts.

int main()
{
    int test_case;
    scanf("%d", &test_case);
    while (test_case--)
    {
        int number_of_elements;
        scanf("%d", &number_of_elements);
        int a[number_of_elements];

        for (int i = 0; i < number_of_elements; i++)
            scanf("%d", &a[i]);

        int k;
        scanf("%d", &k);
        printf("%d", kthSmallest(a, 0, number_of_elements - 1, k));
        printf("\n");
    }
    return 0;
} // } Driver Code Ends