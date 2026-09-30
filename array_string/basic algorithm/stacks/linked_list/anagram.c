#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isAnagram(char s[], char t[])
{
    int count[26] = {0};
    int i;

    if (strlen(s) != strlen(t))
        return false;

    for (i = 0; s[i] != '\0'; i++)
    {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (i = 0; i < 26; i++)
    {
        if (count[i] != 0)
            return false;
    }

    return true;
}

int main()
{
    printf("Test Case 1: ");

    if (isAnagram("anagram", "nagaram"))
        printf("true\n");
    else
        printf("false\n");

    printf("Test Case 2: ");

    if (isAnagram("rat", "car"))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}