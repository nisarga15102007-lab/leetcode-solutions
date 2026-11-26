
# Reverse String

**LeetCode Problem:** https://leetcode.com/problems/reverse-string/

**Difficulty:** Easy  
**Topic:** Arrays & Strings

## Problem Description

Given a character array, reverse the array in place without using another array.

## Approach

I used the Two Pointer method.

1. Set left to the first character.
2. Set right to the last character.
3. Swap the characters at both positions.
4. Move left forward and right backward.
5. Repeat until both pointers meet.

## Test Cases

**Test Case 1:**
- Input: hello
- Output: olleh

**Test Case 2:**
- Input: Nisarga
- Output: agrasiN

## Complexity Analysis

- **Time Complexity:** O(n), because each character is visited at most once.
- **Space Complexity:** O(1), because reversal happens in the same array.

## Result

Successfully solved and accepted on LeetCode.
