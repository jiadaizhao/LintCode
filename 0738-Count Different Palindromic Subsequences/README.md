# 738. Count Different Palindromic Subsequences

Difficulty: Hard

http://www.lintcode.com/en/problem/count-different-palindromic-subsequences/

Given a string S, find the number of different non-empty palindromic subsequences in S, and return that number modulo 10^9 + 7.

A subsequence of a string S is obtained by deleting 0 or more characters from S.  
A sequence is palindromic if it is equal to the sequence reversed.

Two sequences A[1], A[2], ... and B[1], B[2], ... are different if there is some i for which A[i] != B[i].

**Notice**
```
The length of S will be in the range [1, 1000].
Each character S[i] will be in the set {'a', 'b', 'c', 'd'}.
```

**Example**  
```
Given S = "bccb", return 6
Explanation: 
The 6 different non-empty palindromic subsequences are b, c, bb, cc, bcb, bccb.
Note that bcb is counted only once, even though it occurs twice.

Given S = "abcdabcdabcdabcdabcdabcdabcdabcddcbadcbadcbadcbadcbadcbadcbadcba" return 104860361
Explanation: 
There are 3104860382 different non-empty palindromic subsequences, which is 104860361 modulo 10^9 + 7.
```
