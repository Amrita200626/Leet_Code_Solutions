#include <stdio.h>
#include <string.h>

void longestCommonPrefix(char strs[][100], int n)
{
    int i, j;

    for (i = 0; strs[0][i] != '\0'; i++)
    {
        char current = strs[0][i];

        for (j = 1; j < n; j++)
        {
            if (strs[j][i] != current ||
                strs[j][i] == '\0')
            {
                printf("%.*s\n", i, strs[0]);
                return;
            }
        }
    }

    printf("%s\n", strs[0]);
}

int main()
{
    char strs1[3][100] = {
        "flower",
        "flow",
        "flight"
    };

    printf("Test Case 1: ");
    longestCommonPrefix(strs1, 3);

    char strs2[3][100] = {
        "dog",
        "racecar",
        "car"
    };

    printf("Test Case 2: ");
    longestCommonPrefix(strs2, 3);

    return 0;
}