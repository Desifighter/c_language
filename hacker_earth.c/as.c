#include <stdio.h>
#define MAX 100
char *reverse(char[]);

int main()
{
    char str[MAX], *rev;
    scanf("%s", str);  //Enter a String:
    rev = reverse(str); //You have to write this function
    printf("The reversed string is : %s\n", rev);
    return 0;
}
char *reverse(char *str)
{
if (*str)
{
	reverse(str+1);
	printf("%c", *str);
}
}