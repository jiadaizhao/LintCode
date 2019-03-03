# 892. Alien Dictionary

Difficulty: Hard

http://www.lintcode.com/en/problem/alien-dictionary/

There is a new alien language which uses the latin alphabet. However, the order among letters are unknown to you. You receive a list of non-empty words from the dictionary, where words are sorted lexicographically by the rules of this new language. Derive the order of letters in this language.

**Notice**  
1. You may assume all letters are in lowercase.
2. You may assume that if a is a prefix of b, then a must appear before b in the given dictionary.
3. If the order is invalid, return an empty string.
4. There may be multiple valid order of letters, return the smallest in lexicographical order

**Example**  
Given the following words in dictionary,
```
[
  "wrt",
  "wrf",
  "er",
  "ett",
  "rftt"
]
The correct order is: "wertf"
```
Given the following words in dictionary,
```
[
  "z",
  "x"
]
The correct order is: "zx".
```
