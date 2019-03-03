# 1190. Longest Word in Dictionary through Deleting

Difficulty: Medium

https://www.lintcode.com/problem/longest-word-in-dictionary-through-deleting/description

**Description**  
Given a string and a string dictionary, find the longest string in the dictionary that can be formed by deleting some characters of the given string. If there are more than one possible results, return the longest word with the smallest lexicographical order. If there is no possible result, return the empty string.

* All the strings in the input will only contain lower-case letters.
* The size of the dictionary won't exceed 1,000.
* The length of all the strings in the input won't exceed 1,000.

**Example**  
Example 1:
```
Input:
s = "abpcplea", d = ["ale","apple","monkey","plea"]

Output: 
"apple"
```
Example 2:
```
Input:
s = "abpcplea", d = ["a","b","c"]

Output: 
"a"
```
