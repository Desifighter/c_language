#include <stdio.h>
#include <string.h>
int main()
{
    char string[100], sub[100], new_str[100];

    scanf("%[^\n]%*c", string); // A string is taken from test data

    scanf("%[^\n]%*c", sub); // The sub string to be replaced is taken from test data

    scanf("%[^\n]%*c", new_str); // The new substring is taken from test data
    char words[100][100];
    int badao = 0, i;
    for (i = 0; i < strlen(string); i++)
    {
        for (int j = 0; string[badao] != ' '; j++)
        {
            words[i][j] = string[badao];
            badao++;
        }
        badao++;
        if (string[badao] == '\0')
        {
            break;
        }
    }
    printf("value of i = %d\n", i);
    // for (int k = 0; k < i; k++)
    // {
    //     printf("%s\n",words[k]);
    // }
    for (int k = 0; k < i; k++)
    {

        if (strcmp(words[k], sub) == 0)
        {
            strcpy(words[k], new_str);
        }
    }
    // for (int k = 0; k < i; k++)
    // {
    //     printf("%s\n",words[k]);
    // }
    badao = 0;
    for (int n = 0; n < i; n++)
    {
        for (int m = 0; words[n][m] != '\0'; m++)
        {
            string[badao] = words[n][m];
            badao++;
        }
        string[badao] = ' ';
        badao++;
    }
    string[badao] = '\0';
    printf("%s", string);

    return 0;
}