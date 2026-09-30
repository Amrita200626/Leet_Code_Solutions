#include <stdio.h>

void moveZeroes(int nums[], int n)
{
    int i;
    int position = 0;

    for (i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            nums[position] = nums[i];
            position++;
        }
    }

    while (position < n)
    {
        nums[position] = 0;
        position++;
    }
}

void printArray(int nums[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }

    printf("\n");
}

int main()
{
    int nums1[] = {0, 1, 0, 3, 12};

    printf("Test Case 1: ");

    moveZeroes(nums1, 5);
    printArray(nums1, 5);

    int nums2[] = {0, 0, 1};

    printf("Test Case 2: ");

    moveZeroes(nums2, 3);
    printArray(nums2, 3);

    return 0;
}