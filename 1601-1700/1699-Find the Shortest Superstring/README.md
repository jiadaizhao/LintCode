# 1699. Find the Shortest Superstring

Difficulty: Hard

https://www.lintcode.com/problem/find-the-shortest-superstring/description

**Description**  
Given an array A of strings, find any smallest string that contains each string in A as a substring.

We may assume that no string in A is substring of another string in A.

1. 1 <= A.length <= 12
2. 1 <= A[i].length <= 20

**Example 1:**
```
Input：["alex","loves","leetcode"]
Output："alexlovesleetcode"
Explanation：All permutations of "alex","loves","leetcode" would also be accepted.
```

**Example 2:**
```
Input：["catg","ctaagt","gcta","ttca","atgcatc"]
Output："gctaagttcatgcatc"
Explanation：The substrings that are contained in `A` of "gctaagttcatgcatc" are "gcta","ctaagt","ttca","catg","atgcatc".
```
