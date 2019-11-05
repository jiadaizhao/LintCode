# 1111. Maximum Length of Pair Chain

Difficulty: Medium

https://www.lintcode.com/problem/maximum-length-of-pair-chain/description

**Description**  
You are given n pairs of numbers. In every pair, the first number is always smaller than the second number.

Now, we define a pair (c, d) can follow another pair (a, b) if and only if b < c. Chain of pairs can be formed in this fashion.

Given a set of pairs, find the length longest chain which can be formed. You needn't use up all the given pairs. You can select pairs in any order.

1. The number of given pairs will be in the range [1, 1000].

**Example 1:**
```
Input: [[1,2], [2,3], [3,4]]
Output: 2
Explanation: The longest chain is [1,2] -> [3,4]
```

**Example 2:**
```
Input: [[3,4],[2,3],[1,2]]
Output: 2
Explanation: The longest chain is [1,2] -> [3,4]
```
