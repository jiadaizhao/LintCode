# 1362. Substring with Concatenation of All Words

Difficulty: Hard

https://www.lintcode.com/problem/substring-with-concatenation-of-all-words/description

**Description**  
You are given a string, s, and a list of words, words, that are all of the same length. Find all starting indices of substring(s) in s that is a concatenation of each word in words exactly once and without any intervening characters.

**Example**  
Example 1:
```
Input:
  s = "barfoothefoobarman",
  words = ["foo","bar"]
Output: [0,9]
Explanation: Substrings starting at index 0 and 9 are "barfoor" and "foobar" respectively.
The output order does not matter, returning [9,0] is fine too.
```
Example 2:
```
Input:
  s = "wordgoodstudentgoodword",
  words = ["word","student"]
Output: []
```
