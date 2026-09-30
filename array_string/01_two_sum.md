# Two Sum

## Problem Name

Two Sum

## Difficulty

Easy

## LeetCode Link

https://leetcode.com/problems/two-sum/

## Problem Description

Given an array of integers `nums` and an integer `target`, return the indices of the two numbers such that they add up to `target`.

You may assume that each input has exactly one solution, and you may not use the same element twice.

## Approach

I used two nested loops to check every possible pair of numbers.

For each element, I check the elements after it. If their sum is equal to the target, their indices are returned.

This approach is simple and easy to understand.

## Algorithm

1. Start from the first element.
2. Compare it with every element after it.
3. Check whether their sum equals the target.
4. If the sum equals the target, return their indices.
5. Continue until the correct pair is found.

## Time Complexity

O(n²)

## Space Complexity

O(1)

## Test Cases

### Test Case 1

Input:

```text
nums = [2,7,11,15]
target = 9
```

Output:

```text
[0,1]
```

### Test Case 2

Input:

```text
nums = [3,2,4]
target = 6
```

Output:

```text
[1,2]
```

## Learning Notes

* I learned how to search for pairs in an array.
* I learned how nested loops can be used to compare elements.
* I understood how array indices are returned as the answer.
* I also learned that the same element cannot be used twice.
