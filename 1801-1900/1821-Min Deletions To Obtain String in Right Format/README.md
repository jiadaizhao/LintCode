# 1821. Min Deletions To Obtain String in Right Format

Difficulty: Easy

https://www.lintcode.com/problem/min-deletions-to-obtain-string-in-right-format/description

**Description**  
We are given a string SS of length N consisting only of letters A and/or B. Our goal is to obtain a string in the format A...AB...B. (all letters A occur before all letters B) by deleting some letters from S. In particular, strings consisting only of letters A or only of letters B fit this format.

Write a function that, given a string SS, return the minimum number of letters that need to be deleted from SS in order to obtain a string in the above format.

* N is an integer within the range [1,100000];
* string S consists only of the characters A and/or B.

**Example 1:**
```
Input: "BAAABAB"
Output: 2
Explanation: We can obtain "AAABB" by deleting the first occurrence of 'B' and the last occurrence of 'A'.
```

**Example 2:**
```
Input: "BBABAA"
Output: 3
Explanation: We can delete all occurrences of 'A' or 'B'.
```

**Example 3**
```
Input: "AABBBB"
Output: 0
Explanation: We do not have to delete any letters, because the given string is already in the expected format.
```
