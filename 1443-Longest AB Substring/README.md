# 1443. Longest AB Substring

Difficulty: Easy

https://www.lintcode.com/problem/longest-ab-substring/description

**Description**  
Given a string s of only 'A' and 'B', find the longest substring that satisfies the number of 'A' and 'B' are the same. Please output the length of this substring.

* This substring can be empty.
* n is the length of s, 2<=n<=1000000.

**Example**  
Example1
```
Input: s = "ABAAABBBA"
Output: 8
Explanation: 
Substring s[0,7] and s[1,8] meet the conditions, their length is 8.
```
Example2
```
Input: s = "AAAAAA"
Output: 0
Explanation: 
No substring satisfies the condition except empty substring.
```
