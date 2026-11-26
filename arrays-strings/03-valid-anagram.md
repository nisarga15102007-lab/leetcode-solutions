
# Valid Anagram

**LeetCode Problem:** https://leetcode.com/problems/valid-anagram/

**Difficulty:** Easy  
**Topic:** Arrays & Strings

## Problem Description

Given two strings, check whether they contain the same characters with the same frequency.

## Approach

I used a Frequency Counting method.

1. Create an array of 26 elements initialized to zero.
2. Count each character in the first string.
3. Decrease the count for each character in the second string.
4. If all counts are zero, both strings are anagrams.
5. Otherwise, they are not anagrams.

## Test Cases

**Test Case 1:**
- Input: s = "anagram", t = "nagaram"
- Output: true

**Test Case 2:**
- Input: s = "rat", t = "car"
- Output: false

## Complexity Analysis

- **Time Complexity:** O(n), where n is the length of the strings.
- **Space Complexity:** O(1), because the frequency array always has 26 elements.

## Result

Successfully solved and accepted on LeetCode.
