#include <stdio.h>

int binarySearch(int nums[], int n, int target)
{
    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
            return mid;

        if (nums[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main()
{
    int nums1[] = {1, 3, 5, 7, 9};

    printf("Test Case 1: %d\n",
           binarySearch(nums1, 5, 5));

    printf("Test Case 2: %d\n",
           binarySearch(nums1, 5, 10));

    return 0;
}