
# Valid Parentheses

**LeetCode Problem:** https://leetcode.com/problems/valid-parentheses/

**Difficulty:** Easy  
**Topic:** Stacks

## Problem Description

Given a string containing brackets, determine whether the brackets are correctly opened and closed in the correct order.

## Approach

I used the Stack method.

1. Create an empty stack.
2. Push every opening bracket onto the stack.
3. When a closing bracket appears, check the top element.
4. If the brackets match, pop the element.
5. If they do not match, return false.
6. If the stack is empty at the end, return true.

## Test Cases

**Test Case 1:**
- Input: "()[]{}"
- Output: true

**Test Case 2:**
- Input: "(]"
- Output: false

## Complexity Analysis

- **Time Complexity:** O(n), because each character is processed once.
- **Space Complexity:** O(n), because the stack may store all opening brackets.

## Result

Successfully solved and accepted on LeetCode.
