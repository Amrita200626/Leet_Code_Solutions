#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValid(char s[])
{
    char stack[100];
    int top = -1;
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        char ch = s[i];

        if (ch == '(' || ch == '[' || ch == '{')
        {
            top++;
            stack[top] = ch;
        }
        else
        {
            if (top == -1)
                return false;

            char open = stack[top];
            top--;

            if (ch == ')' && open != '(')
                return false;

            if (ch == ']' && open != '[')
                return false;

            if (ch == '}' && open != '{')
                return false;
        }
    }

    return top == -1;
}

int main()
{
    printf("Test Case 1: ");

    if (isValid("()[]{}"))
        printf("true\n");
    else
        printf("false\n");

    printf("Test Case 2: ");

    if (isValid("(]"))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}