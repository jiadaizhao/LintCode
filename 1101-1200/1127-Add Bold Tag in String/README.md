# 1127. Add Bold Tag in String

Difficulty: Medium

https://www.lintcode.com/problem/add-bold-tag-in-string/description

**Description**  
Given a string s and a list of strings dict, you need to add a closed pair of bold tag and to wrap the substrings in s that exist in dict. If two such substrings overlap, you need to wrap them together by only one pair of closed bold tag. Also, if two substrings wrapped by bold tags are consecutive, you need to combine them.

The given dict won't contain duplicates, and its length won't exceed 100.
All the strings in input have length in range [1, 1000].

**Example**  
```
Input: 
s = "abcxyz123"
dict = ["abc","123"]
Output:
"<b>abc</b>xyz<b>123</b>"
```
```
Input: 
s = "aaabbcc"
dict = ["aaa","aab","bc"]
Output:
"<b>aaabbc</b>c"
```
