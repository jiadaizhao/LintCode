# 1789. Distinguish Username

Difficulty: Easy

https://www.lintcode.com/problem/distinguish-username/description

**Description**  
Give a set of usernames, if there are duplicate requests to add a numeric distinction after the username, return the modified array.

**Example 1:**
```
Input：["aa", "bb", "cc", "bb", "aa", "aa", "aa"]
Output：["aa","bb","cc","bb1","aa1","aa2","aa3"]
Explanation：
The output of the second occurrence of "bb" is "bb1"
The output of the second occurrence of "aa" is "aa1"
The output of the third occurrence of "aa" is "aa2"
The output of the fourth occurrence of "aa" is "aa3"
```

**Example 2:**
```
Input：[aa, bb, cc, aa]
Output：[aa, bb, cc, aa1]
Explanation：The output of the second occurrence of "aa" is "aa1"
```
