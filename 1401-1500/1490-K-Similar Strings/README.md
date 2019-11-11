# 1490. K-Similar Strings

Difficulty: Hard

https://www.lintcode.com/problem/k-similar-strings/description

**Description**  
Strings A and B are K-similar (for some non-negative integer K) if we can swap the positions of two letters in A exactly K times so that the resulting string equals B.

Given two anagrams A and B, return the smallest K for which A and B are K-similar.

1. 1 <= A.length == B.length <= 20
2. A and B contain only lowercase letters from the set {'a', 'b', 'c', 'd', 'e', 'f'}

**Example 1:**
```
Input: A = "ab", B = "ba"
Output: 1
Explanation：a<->b
```

**Example 2:**
```
Input: A = "abc", B = "bca"
Output: 2
Explanation：a<->b,b<->c
```
