
# Longest Common Prefix

**LeetCode Problem:** https://leetcode.com/problems/longest-common-prefix/

**Difficulty:** Easy  
**Topic:** Arrays & Strings

## Problem Description

Given an array of strings, find the longest common prefix shared by all strings.

## Approach

I used the Horizontal Scanning method.

1. Take the first string as the reference.
2. Compare its characters with the corresponding characters of all other strings.
3. If a mismatch occurs, stop.
4. Return the common starting characters.

## Test Cases

**Test Case 1:**
- Input: ["flower", "flow", "flight"]
- Output: "fl"

**Test Case 2:**
- Input: ["dog", "racecar", "car"]
- Output: ""

## Complexity Analysis

- **Time Complexity:** O(n × m), where n is the number of strings and m is the length of the shortest string.
- **Space Complexity:** O(1) auxiliary space.

## Result

Successfully solved and accepted on LeetCode.
