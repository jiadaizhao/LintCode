# 1103. Split Array into Consecutive Subsequences

Difficulty: Medium

https://www.lintcode.com/problem/split-array-into-consecutive-subsequences/description

**Description**  
You are given an integer array sorted in ascending order (may contain duplicates), you need to split them into several subsequences, where each subsequences consist of at least 3 consecutive integers. Return whether you can make such a split.

**Example**  
Example 1:
```
Input: [1,2,3,3,4,5]
Output: True
Explanation:
You can split them into two consecutive subsequences : 
1, 2, 3
3, 4, 5
```
Example 2:
```
Input: [1,2,3,3,4,4,5,5]
Output: True
Explanation:
You can split them into two consecutive subsequences : 
1, 2, 3, 4, 5
3, 4, 5
```
Example 3:
```
Input: [1,2,3,4,4,5]
Output: False
```
