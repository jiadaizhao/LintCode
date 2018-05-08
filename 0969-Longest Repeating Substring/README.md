# 969. Longest Repeating Substring

Difficulty: Medium

https://lintcode.com/problem/longest-repeating-substring/description

Given a string str, find the longest substring with no fewer than k repetitions and return the length. The substring can have overlapping parts, but cannot completely overlap.

**Notice**  
* 1 <= str.length <= 1000
* 1 < k < str.length
* We guarantee that the problem will certainly can be solved

**Example**  
Given str = "aaa", k = 2, return 2.
```
Explanation:
The longest subsequence with no fewer than k repetitions is "aa", and the length is 2.
```
Given str = "aabcbcbcbc", k = 2, return 6.
```
Explanation:
Subsequences repeat no fewer than twice are "a", "bc", "bcbc" and "bcbcbc", and the longest is "bcbcbc", and the length is 6.
```
