int sum=0,temp;
         for (int i = 0; i < arr_count; i++)
         {
            sum+= arr[i];
         }
         
         for (int i = 1; i < arr_count; i++)
         {
             if (arr[0]<arr[i])
             {
                 temp=arr[0];
                 arr[0]=arr[i];
                 arr[i]=temp;
             }
             
         }
         printf("%d ",sum-arr[0]);
         for (int i = 1; i < arr_count; i++)
         {
             if (arr[0]>arr[i])
             {
                 temp=arr[0];
                 arr[0]=arr[i];
                 arr[i]=temp;
             }
             
         }
         printf("%d ",sum-arr[0]);