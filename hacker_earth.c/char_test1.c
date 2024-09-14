#include <stdio.h>

int main()
{
    char time[11] = "07:05:45PM";
                  // 0123456789
    time[8] = '\0';
    printf("%s", time);
    return 0;
}