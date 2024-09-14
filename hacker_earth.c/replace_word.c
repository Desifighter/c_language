#include <stdio.h>
#include <string.h>
#include<conio.h>
void replaceSubstring(char[], char[], char[]);

int main()
{
    char string[100], sub[100], new_str[100];

    scanf("%[^\n]%*c", string); // A string is taken from test data

    scanf("%[^\n]%*c", sub); // The sub string to be replaced is taken from test data

    scanf("%[^\n]%*c", new_str); // The new substring is taken from test data

    replaceSubstring(string, sub, new_str); // Function to find and replace the sub string with new sub string

    printf("%s\n", string);
    getch();
}
void replaceSubstring(char string[], char sub[], char new_str[])
{
    char words[25][100];
    int count = 0, i;
    for (i = 0; i < strlen(string); i++)
    {
        for (int j = 0; string[count] != ' '; j++)
        {
            words[i][j] = string[count];
            count++;
        }
        count++;
        if (string[count] == '\0')
        {
            break;
        }
    }
    for (int k = 0; k < i; k++)
    {

        if (strcmp(words[k], sub) == 0)
        {
            strcpy(words[k], new_str);
        }
    }
    count = 0;
    for (int n = 0; n < i; n++)
    {
        for (int m = 0; words[n][m] != '\0'; m++)
        {
            string[count] = words[n][m];
            count++;
        }
        string[count] = ' ';
        count++;
    }
    string[count] = '\0';
}
