# 1072. Find K-th Smallest Pair Distance

Difficulty: Hard

https://www.lintcode.com/problem/find-k-th-smallest-pair-distance/description

**Description**  
Given an integer array, return the k-th smallest distance among all the pairs. The distance of a pair (A, B) is defined as the absolute difference between A and B.

* 2 <= len(nums) <= 10000.
* 0 <= nums[i] < 1000000.
* 1 <= k <= len(nums) * (len(nums) - 1) / 2.

**Example 1:**
```
Input:
nums = [1,3,1]
k = 1
Output: 0
Explanation:
Here are all the pairs:
(1,3) -> 2
(1,1) -> 0
(3,1) -> 2
Then the 1st smallest distance pair is (1,1), and its distance is 0.
```
