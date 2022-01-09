# 1819. Longest Semi Alternating Substring

Difficulty: Easy

https://www.lintcode.com/problem/longest-semi-alternating-substring/description

**Description**  
You are given a string SS of length NN containing only characters a and b. A substring (contiguous fragment) of SS is called a semi-alternating substring if it does not contain three identical consecutive characters. In other words, it does not contain either aaa or bbb substrings. Note that whole SS is its own substring.

Write a function, which given a string SS, returns the length of the longest semi-alternating substring of SS.

* N is an integer within the range [1,200000];
* string S consists only of the characters a and/or b.

**Example 1:**
```
Input: "baaabbabbb"
Output: 7
Explanation: "aabbabb" is the longest semi-alternating substring.
```

**Example 2:**
```
Input: "babba"
Output: 5
Explanation: Whole S is semi-alternating.
```

**Example 3:**
```
Input: "abaaaa"
Output: 4
Explanation: "abaa" is the longest semi-alternating substring.
```
