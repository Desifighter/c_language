#include<stdio.h>
int bin_search(int x[],int size,int key){
    int l,r,mid;
    l=-1;r=size;
    while (l+1 !=r)
    {
        mid=(l+r)/2;
        if (x[mid]<=key)
        {
            l=mid;
        }
        else
        {
            r=mid;
        }
        
        
    }
    if (l>=0&& x[l]==key)
    {
        return l;
    }
    else
      return -1;
    
    
}
int main(){
     
return 0;
}