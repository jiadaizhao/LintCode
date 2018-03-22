# 869. Find the Derangement of An Array

Difficulty: Medium

http://www.lintcode.com/en/problem/find-the-derangement-of-an-array/

In combinatorial mathematics, a derangement is a permutation of the elements of a set, such that no element appears in its original position.

There's originally an array consisting of n integers from 1 to n in ascending order, you need to find the number of derangement it can generate.

Also, since the answer may be very large, you should return the output mod 10^9 + 7.

**Notice**  
Given n = 3, return 2.
```
Explanation: 
The original array is [1,2,3]. The two derangements are [2,3,1] and [3,1,2].
```
