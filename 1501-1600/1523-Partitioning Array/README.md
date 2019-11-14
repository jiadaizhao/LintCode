# 1523. Partitioning Array

Difficulty: Easy

https://www.lintcode.com/problem/partitioning-array/description

**Description**  
Given an array of numbers, you are required to check if it is possible to partition the array into some subsequences of length k each, such that:

* Each element in the array occurs in exactly one subsquence
* All the numbers in a subsequence are distinct
* Elements in the array having the same value must be in different subsequences

Is possible to partition the array satisfying the above conditions? If it is possible, return true, else return false

**Example 1:**
```
Input:
A:[1, 2, 3, 4]
k = 2
output: true
Explanation:
Then one possible way is to choose the first 2 elements of the array {1, 2} as the first subsequence, the next 2 elements {3, 4} as the next subsquence.So the answer is true
```

**Example 2:**
```
Input:
A: [1, 2, 2, 3]
k: 3
output: false
Explanation:
there is no way to partition the array into subsequences such that all subsquences are of length 3 and each element in the array occurs in exactly one subsequece.Hence the answer is false.
```
