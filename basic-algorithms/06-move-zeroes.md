
# Move Zeroes

**LeetCode Problem:** https://leetcode.com/problems/move-zeroes/

**Difficulty:** Easy  
**Topic:** Arrays

## Problem Description

Given an integer array, move all zeros to the end while maintaining the relative order of non-zero elements.

## Approach

I used the Two Pointer method.

1. Initialize a position variable j to zero.
2. Traverse the array using a loop.
3. If an element is non-zero, place it at position j.
4. Increase j after placing the element.
5. Fill all remaining positions with zero.

## Test Cases

**Test Case 1:**
- Input: [0,1,0,3,12]
- Output: [1,3,12,0,0]

**Test Case 2:**
- Input: [0,0,1]
- Output: [1,0,0]

## Complexity Analysis

- **Time Complexity:** O(n), because the array is traversed a constant number of times.
- **Space Complexity:** O(1), because the changes are made in the original array.

## Result

Successfully solved and accepted on LeetCode.
