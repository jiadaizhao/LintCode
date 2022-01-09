# 1820. Find Letter

Difficulty: Easy

https://www.lintcode.com/problem/find-letter/description

**Description**  
Given a string str, return the letter with the largest alphabetical order in the string and both such uppercase and lowercase letters must appear in the string.
If no such letter exists, return '~'.

* please return uppercase
* |str|<=1000

**Example 1:**
```
Input:"aAbBcD"
Output:'B'
Explanation：Because C and D's lowercase and uppercase do not appear at the same time, 
both A and B are appearing, but B is larger than A, so B is returned.
```

**Example 2:**
```
Input:"looGVSSPbR"
Output:'~'
```
