# 1521. Unique Twitter User Id Set

Difficulty: Easy

https://www.lintcode.com/problem/unique-twitter-user-id-set/description

**Description**  
Twitter needs user ids to be unique and while assigning the user ids to its customers, Twitter wants to have the sum of the user ids to be minimum.
Given an array of random user ids for n users, increment any duplicate elements untils all the user ids are unique and ensure that their sum is minimum.

* 1 <= n <= 2000
* 1 <= arr[i] <= 3000 where 0 <= i < n

**Example 1:**
```
Input:
arr = [3, 2, 1, 2, 7]
output: 17
Explanation：if arr = [3, 2, 1, 2, 7], then arr(unique) = [3, 2, 1, 4, 7] and its user ids sum to a minimal value of 3 + 2 + 1 + 4 + 7 = 17
```
