# 1823. Longest Prefix of Array

Difficulty: Easy

https://www.lintcode.com/problem/longest-prefix-of-array/description

**Description**  
Given two positive integers X and Y, and an array nums of positive integers.
We need to find the longest prefix index which contains an equal number of X and Y，The number of X in the longest prefix must appear at least one time.
Return the maximum index of largest prefix if exist, otherwise return -1.

* The length of nums within range: [0, 1000000]
* nums[i], X and Y within range: [1, 1 000000]

**Example 1:**
```
Input:
X = 2
Y = 4
nums: [1, 2, 3, 4, 4, 3]
Output: 3
Explanation: The longest prefix with same number of occurrences of 2 and 4 is: {1, 2, 3, 4}, so you should return 3
```

**Example 2:**
```
Input : 
X = 7 
Y = 42
nums = [7, 42, 5, 6, 42, 8, 7, 5, 3, 6, 7]
Output : 9
Explanation：The longest prefix with same number of occurrences of 7 and 42 is: {7, 42, 5, 6, 42, 8, 7, 5, 3, 6}, so you should return 9
```

**Example 3**
```
Input:
X = 1
Y = 10
nums: [2, 3, 1]
Output: -1
Explanation: There are no prefix makes both 1 and 10 appear and  same number of occurrences
```
