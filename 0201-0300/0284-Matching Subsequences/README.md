# 284. Matching Subsequences

Difficulty: Medium

https://www.lintcode.com/problem/matching-subsequences/description

Given string source and a dictionary of words words, return list of words[i] that is a subsequence of source.

* All words in words and source will consists of lowercase and uppercase letters.
* The length of source will be in the range of [1, 1000].
* The sum of all length of words will be in the range of [1, 1000].
* The number of words will be in the range of [1, 1000].

**Example1 :**
```
Input: 
source = "abcde"
words = ["a", "bb", "acd", "ace"]
Output: ["a", "acd", "ace"]
Explanation: There are three words in words that are a subsequence of source: "a", "acd", "ace".
```

**Example2 :**
```
Input: 
source = "bcogtadsjofisdhklasdj"
word = ["book","code","tag"]
Output: ["book"]
Explanation: Only one word in words that is a subsequence of source: "book".
```

**Challenge**
* The length of source will be in the range of [1, 100000].
* The sum of all length of words will be in the range of [1, 1000].
