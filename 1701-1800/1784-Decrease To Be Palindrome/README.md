# 1784. Decrease To Be Palindrome

Difficulty: Easy

https://www.lintcode.com/problem/decrease-to-be-palindrome/description

**Description**  
Given a string s with a-z. We want to change s into a palindrome with following operations:
```
1. change 'z' to 'y';
2. change 'y' to 'x';
3. change 'x' to 'w';
................
24. change 'c' to 'b';
25. change 'b' to 'a';
```
Returns the number of operations needed to change s to a palindrome at least.

**Example 1:**
```
Input: "abc"
Output: 2
Explanation: 
  1. Change 'c' to 'b': "abb"
  2. Change the last 'b' to 'a': "aba"
```

**Example 2:**
```
Input: "abcd"
Output: 4
```
