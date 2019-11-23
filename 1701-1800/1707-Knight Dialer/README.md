# 1707. Knight Dialer

Difficulty: Medium

https://www.lintcode.com/problem/knight-dialer/description

**Description**  
A chess knight can move as indicated in the chess diagram below:

This time, we place our chess knight on any numbered key of a phone pad (indicated above), and the knight makes N-1 hops. Each hop must be from one key to another numbered key.

Each time it lands on a key (including the initial placement of the knight), it presses the number of that key, pressing N digits total.

How many distinct numbers can you dial in this manner?

Since the answer may be large, output the answer modulo 10^9 + 7.

* 1≤N≤5000

**Example 1:**
```
Input: 1
Output: 10
Explanation:
The answer may be 0, 1, 2, 3, ..., 9. 
```

**Example 2:**
```
Input: 2
Output: 20
Explanation:
The answer may be 04, 06, 16, 18, 27, 29, 34, 38, 43, 49, 40, 61, 67, 60, 72, 76, 81, 83, 94, 92.
```

**Example 3:**
```
Input: 3
Output: 46
```
