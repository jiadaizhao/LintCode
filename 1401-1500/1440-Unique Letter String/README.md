# 1440. Unique Letter String

Difficulty: Hard

https://www.lintcode.com/problem/unique-letter-string/description

**Description**  
A character is unique in string S if it occurs exactly once in it.

For example, in string S = "LETTER", the only unique characters are "L" and "R".

Let's define UNIQ(S) as the number of unique characters in string S.

For example, UNIQ("LETTER") = 2.

Given a string S with only uppercases, calculate the sum of UNIQ(substring) over all non-empty substrings of S.

If there are two or more equal substrings at different positions in S, we consider them different.

Since the answer can be very large, return the answer modulo 10 ^ 9 + 7.

* 0≤S.length≤10000

**Example 1:**
```
Input: S = "ABC"
Output: 10
Explanation:
All possible substrings are: "A","B","C","AB","BC" and "ABC".
Evey substring is composed with only unique letters.
Sum of lengths of all substring is 1 + 1 + 1 + 2 + 2 + 3 = 10
```

**Example 2:**
```
Input: S = "ABA"
Output: 8
Explanation: 
The same as example 1, except uni("ABA") = 1.
```
