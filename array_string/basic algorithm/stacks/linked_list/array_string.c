#include <stdio.h>
#include <string.h>

void reverseString(char str[])
{
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right)
    {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }
}

int main()
{
    char str1[] = "hello";

    printf("Test Case 1: ");
    reverseString(str1);
    printf("%s\n", str1);

    char str2[] = "a";

    printf("Test Case 2: ");
    reverseString(str2);
    printf("%s\n", str2);

    return 0;
}