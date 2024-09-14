#include <stdio.h>
#include <string.h>

void replaceSubstring(char[], char[], char[]);

int main()
{
    char string[100], sub[100], new_str[100];

    scanf("%[^\n]%*c", string); // A string is taken from test data

    scanf("%[^\n]%*c", sub); // The sub string to be replaced is taken from test data

    scanf("%[^\n]%*c", new_str); // The new substring is taken from test data

    replaceSubstring(string, sub, new_str); // Function to find and replace the sub string with new sub string

    printf("%s\n", string);
}
void replaceSubstring(char string[], char sub[], char new_str[])
{
    int stringLen, subLen, newLen;
    int i = 0, j, k;
    int flag = 0, start, end;
    stringLen = strlen(string);
    subLen = strlen(sub);
    newLen = strlen(new_str);

    for (i = 0; i < stringLen; i++)
    {
        flag = 0;
        start = i;
        for (j = 0; string[i] == sub[j]; j++, i++)
            if (j == subLen - 1)
                flag = 1;
        end = i;
        if (flag == 0)
            i -= j;
        else
        {
            for (j = start; j < end; j++)
            {
                for (k = start; k < stringLen; k++)
                    string[k] = string[k + 1];
                stringLen--;
                i--;
            }

            for (j = start; j < start + newLen; j++)
            {
                for (k = stringLen; k >= j; k--)
                    string[k + 1] = string[k];
                string[j] = new_str[j - start];
                stringLen++;
                i++;
            }
        }
    }
}