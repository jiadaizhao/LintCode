# 1270. Ransom Note

Difficulty: Easy

https://www.lintcode.com/problem/ransom-note/description

**Description**  
Given an arbitrary ransom note string and another string containing letters from all the magazines, write a function that will return true if the ransom note can be constructed from the magazines ; otherwise, it will return false.

Each letter in the magazine string can only be used once in your ransom note.

You may assume that both strings contain only lowercase letters.

**Example**  
Example 1
```
Input : ransomNote = "aa", magazine = "aab"
Output : true
Explanation : the ransom note can be constructed from the magazines.
```
Example 2
```
Input : ransomNote = "aaa", magazine = "aab"
Output : false
Explanation : the ransom note can't be constructed from the magazines.
```
