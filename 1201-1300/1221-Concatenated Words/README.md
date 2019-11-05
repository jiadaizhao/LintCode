# 1221. Concatenated Words

Difficulty: Hard

https://www.lintcode.com/problem/concatenated-words/description

**Description**  
Given a list of words (without duplicates), please write a program that returns all concatenated words in the given list of words.

A concatenated word is defined as a string that is comprised entirely of at least two shorter words in the given array.

1. The number of elements of the given array will not exceed 10,000
2. The length sum of elements in the given array will not exceed 600,000.
3. All the input string will only include lower case letters.
4. The returned elements order does not matter.

**Example 1:**
```
Input: words = ["cat","cats","catsdogcats","dog","dogcatsdog","hippopotamuses","rat","ratcatdogcat"]
Output: ["catsdogcats","dogcatsdog","ratcatdogcat"]
Explanation: "catsdogcats" can be concatenated by "cats", "dog" and "cats"; 
 "dogcatsdog" can be concatenated by "dog", "cats" and "dog"; 
"ratcatdogcat" can be concatenated by "rat", "cat", "dog" and "cat".
```

**Example 2:**
```
Input: words = ["a","b","ab","abc"]
Output: ["ab"]
Explanation: 
"ab" can be concatenated by "a" and "b".
```
