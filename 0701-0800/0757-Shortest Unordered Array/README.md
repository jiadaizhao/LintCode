# 757. Shortest Unordered Array

Difficulty: Easy

https://www.lintcode.com/problem/multiply-two-numbers/description

**Description**  
Given an array of integers, find the length of the shortest possible subsequence of integers that are unordered. A set of integers are said to be unordered if they are neither decreasing nor increasing.[Hint: start checking if it is increasing/decreasing and return 0, else check if an unordered triplet exists. If it does, return 3, else 0]

**Example 1:**
```
Input：[1,2,3,4,5,6]
Output：0
Explanation：It is a increasing array.
```

**Example 2:**
```
Input：[1,2,1,2]
Output：3
Explanation：[1,2,1]
```
