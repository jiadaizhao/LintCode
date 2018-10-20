# 1089. Valid Parenthesis String

Difficulty: Medium

https://www.lintcode.com/problem/valid-parenthesis-string/description

**Description**  
Given a string containing only three types of characters: '(', ')' and '*', write a function to check whether this string is valid. We define the validity of a string by these rules:

1. Any left parenthesis '(' must have a corresponding right parenthesis ')'.
2. Any right parenthesis ')' must have a corresponding left parenthesis '('.
3. Left parenthesis '(' must go before the corresponding right parenthesis ')'.
4. '*' could be treated as a single right parenthesis ')' or a single left parenthesis '(' or an empty string.
5. An empty string is also valid.

* The string size will be in the range [1, 100].

**Example**  
```
Input: "()"
Output: True

Input: "(*)"
Output: True

Input: "(*))"
Output: True
```