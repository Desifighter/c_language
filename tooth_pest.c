#include<stdio.h>
#include<stdarg.h>
int min(int count,...) {
       va_list list;
        
        va_start(list,count);
        int temp=va_arg(list,int);
        for (int i = 0; i < count; i++)
        {
            int mina=va_arg(list,int);
            mina=temp<mina?temp:mina;
            
        }
        va_end(list);
        return mina;
    //     int max = 0;
    // va_list ptr;
    // va_start(ptr, n);
    // for (int i = 0; i < n; i++) {
    //     int temp = va_arg(ptr, int);
    //     max = temp > max ? temp : max;
    // }
    // va_end(ptr);
    // return max;
}


int main(){
     printf("minimum= %d",min(4,3,4,5,1));
return 0;
}