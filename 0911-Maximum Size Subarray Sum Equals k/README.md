# 911. Maximum Size Subarray Sum Equals k

Difficulty: Medium

http://www.lintcode.com/en/problem/maximum-size-subarray-sum-equals-k/

Given an array nums and a target value k, find the maximum length of a subarray that sums to k. If there isn't one, return 0 instead.

**Notice**  
The sum of the entire nums array is guaranteed to fit within the 32-bit signed integer range.

**Example**  
Given nums = [1, -1, 5, -2, 3], k = 3, return 4.
```
Explanation:
because the subarray [1, -1, 5, -2] sums to 3 and is the longest.
```
Given nums = [-2, -1, 2, 1], k = 1, return 2.
```
Explanation:
because the subarray [-1, 2] sums to 1 and is the longest.
```
