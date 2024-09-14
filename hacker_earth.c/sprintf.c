#include <stdio.h>
#include<string.h>
#include <stdlib.h>
int main()
{
    char *time = malloc(128 * sizeof(char));
    int hr = 7, min = 5, sec = 5;
    //char hrs[5]=strtok(time, ":"),mins[5]= strtok(NULL, ":"),secs[5]= strtok(NULL, "");
    sprintf(time, "%.2d:%.2d:%.2d", hr, min, sec);
    printf("%s\n", time);
    // // hr = atoi(strtok(time, ":"));
    // // min = atoi(strtok(NULL, ":"));
    // // sec = atoi(strtok(NULL, ""));
    // printf("hr=%s,min=%s,sec=%s",hrs,mins,secs);
    return 0;
}