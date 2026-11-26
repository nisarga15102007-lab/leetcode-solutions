
# Binary Search

**LeetCode Problem:** https://leetcode.com/problems/binary-search/

**Difficulty:** Easy  
**Topic:** Basic Algorithms

## Problem Description

Given a sorted array of integers and a target value, find the index of the target. If it is not present, return -1.

## Approach

I used the Binary Search method.

1. Set left to the first index and right to the last index.
2. Find the middle index.
3. If the middle element equals the target, return its index.
4. If the target is greater, search the right half.
5. If the target is smaller, search the left half.
6. Repeat until the target is found or the search ends.

## Test Cases

**Test Case 1:**
- Input: nums = [-1,0,3,5,9,12], target = 9
- Output: 4

**Test Case 2:**
- Input: nums = [-1,0,3,5,9,12], target = 2
- Output: -1

## Complexity Analysis

- **Time Complexity:** O(log n), because the search area is divided in half each time.
- **Space Complexity:** O(1), because only a few variables are used.

## Result

Successfully solved and accepted on LeetCode.
