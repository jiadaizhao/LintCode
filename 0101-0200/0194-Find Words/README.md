# 194. Find Words

Difficulty: Medium

https://www.lintcode.com/problem/find-words/description

Given a string str and a dictionary dict, you need to find out which words in the dictionary are subsequences of the string and return those words.The order of the words returned should be the same as the order in the dictionary.

1. |str|<=1000
2. the sum of all words length in dictionary<=1000
(All characters are in lowercase)

**Example 1:**
```
Input:
str="bcogtadsjofisdhklasdj"
dict=["book","code","tag"]
Output:
["book"]
Explanation:Only book is a subsequence of str
```

**Example 2:**
```
Input:
str="nmownhiterer"
dict=["nowhere","monitor","moniter"]
Output:
["nowhere","moniter"]
```

**Challenge**  
|str|<=100000
