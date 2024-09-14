#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a;
    char* represent[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    scanf("%d", &a);
    for(int i = 1; i <= a; i++) {
        
        if(i > 9&&i==a) {
            printf("Greater than 9");
        }
        else if(i==a){
            printf("%s\n", represent[i]);
        }
    }
    return 0;
