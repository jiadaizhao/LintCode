# 1182. Reverse String II

Difficulty: Easy

https://www.lintcode.com/problem/reverse-string-ii/description

**Description**  
Given a string and an integer k, you need to reverse the first k characters for every 2k characters counting from the start of the string. If there are less than k characters left, reverse all of them. If there are less than 2k but greater than or equal to k characters, then reverse the first k characters and left the other as original.

The string consists of lower English letters only.
Length of the given string and k will in the range [1, 10000]

**Example 1:**
```
Input: s = "abcdefg", k = 2
Output: "bacdfeg"
```

**Example 2:**
```
Input: s = "ace", k = 4
Output: "eca"
```
