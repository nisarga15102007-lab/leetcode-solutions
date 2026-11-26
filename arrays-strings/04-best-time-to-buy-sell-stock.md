
# Best Time to Buy and Sell Stock

**LeetCode Problem:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

**Difficulty:** Easy  
**Topic:** Arrays

## Problem Description

Given an array of stock prices, find the maximum profit by buying on one day and selling on a later day.

## Approach

I used a Single Pass method.

1. Store the first price as the minimum price.
2. Traverse the remaining prices.
3. If the current price is smaller, update the minimum price.
4. Otherwise, calculate the profit.
5. Update maximum profit if a better profit is found.

## Test Cases

**Test Case 1:**
- Input: [7,1,5,3,6,4]
- Output: 5

**Test Case 2:**
- Input: [7,6,4,3,1]
- Output: 0

## Complexity Analysis

- **Time Complexity:** O(n), because the array is traversed once.
- **Space Complexity:** O(1), because only two main variables are used.

## Result

Successfully solved and accepted on LeetCode.
