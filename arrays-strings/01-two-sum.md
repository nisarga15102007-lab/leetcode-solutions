
# Two Sum

**LeetCode Problem:** https://leetcode.com/problems/two-sum/

**Difficulty:** Easy  
**Topic:** Arrays

## Problem Description

Given an array of integers and a target value, find the indices of two numbers whose sum is equal to the target.

## Approach

I used the Nested Loop method.

1. The first loop selects one number from the array.
2. The second loop selects another number after it.
3. Both numbers are added and compared with the target.
4. If their sum equals the target, their indices are returned.

## Test Cases

**Test Case 1:**
- Input: nums = [2,7,11,15], target = 9
- Output: [0,1]

**Test Case 2:**
- Input: nums = [3,3], target = 6
- Output: [0,1]

## Complexity Analysis

- **Time Complexity:** O(n²) because two nested loops are used.
- **Space Complexity:** O(1) auxiliary space, excluding the returned array.

## Result

Successfully solved and accepted on LeetCode.
