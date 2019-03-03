# 1638. Least Substring

Difficulty: Easy

https://www.lintcode.com/problem/least-substring/description

**Description**  
Given a string containing n lowercase letters, the string needs to be divided into several continuous substrings, the letter in the substring should be same, and the number of letters in the substring does not exceed k, and output the minimal substring number meeting the requirement.

n <= 1e5

**Example**  
Example1
```
Input: s = "aabbbc", k = 2
Output: 4
Explanation:
we can get "aa", "bb", "b", "c" four substring.
```
Example2
```
input: s = "aabbbc", k = 3
Output: 3
we can get "aa", "bbb", "c" three substring.
```
