# 581. Longest Repeating Subsequence

Difficulty: Medium

http://www.lintcode.com/en/problem/longest-repeating-subsequence/

Given a string, find length of the longest repeating subsequence such that the two subsequence don’t have same string character at same position, i.e., any ith character in the two subsequences shouldn’t have the same index in the original string.

**Example**  
For the following binary tree:
str = abc, return 0, There is no repeating subsequence

str = aab, return 1, The two subsequence are a(first) and a(second).  
Note that b cannot be considered as part of subsequence as it would be at same index in both.

str = aabb, return 2
