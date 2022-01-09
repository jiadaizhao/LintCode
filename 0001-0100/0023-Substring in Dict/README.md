# 23. Substring in Dict

Difficulty: Medium

https://www.lintcode.com/problem/substring-in-dict/description

Given a string s and a dictionary of words dict, please return all subsequences of string in the dict.

If we can delete some char from a string s to get string t, we will say t is the subsequence of s.

The length of s is no more than 1000.

The number of words in the dict is no more than 1000 and the total length of these words in dict is no more than 1000.

All the strings only contain lowercase letters.

**Example 1:**
```
Input："lintcode"，["de","ding","co","code","lint"]
Output：["de","co","code","lint"]
Explanation：
We can delete "lintco" to get "de".
We can delete "lint" and "de" to get "co".
We can delete "lint" to get "code".
We can delete "code" to get "lint".
We can't get "ding" from "lintcode".
```

**Example 2:**
```
Input："a"，[]
Output：[]
Explanation：dict is null.
```

**Challenge**

What if the length of s is no more than 100\,000100000？
