# 922. Group Shifted Strings

Difficulty: Medium

https://www.lintcode.com/problem/group-shifted-strings/description

**Description**  
Given a string, we can "shift" each of its letter to its successive letter, for example: "abc" -> "bcd". We can keep "shifting" which forms the sequence:
```
"abc" -> "bcd" -> ... -> "xyz"
```
Given a list of strings which contains only lowercase alphabets, group all strings that belong to the same shifting sequence.

You don't need to care about the order of the result.

**Example 1:**
```
input:["abc", "bcd", "acef", "xyz", "az", "ba", "a", "z"]
output: [["a","z"],["abc","bcd","xyz"],["acef"],["az","ba"]]
```

**Example 2:**
```
input:["a"]
output:[["a"]]
```
