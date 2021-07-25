# 537. N-Gram (Map Reduce)

Difficulty: Medium

https://www.lintcode.com/problem/n-gram-map-reduce/description

**Description**

Give a number of strings and the number N. Use the Map Reduce method to count all N-Grams and their occurrences. The letter is granular.

**Example 1:**  
```   
Input: N = 3
doc_1: "abcabc"
doc_2: "abcabc"
doc_3: "bbcabc"
Output:
[
  "abc": ５,
  "bbc": 1, 
  "bca": 3,
  "cab": 3
]
```

**Example 2:**
```
Input: N=3
doc_1: "abcabc"
Output:
[
  "abc": 2, 
  "bca": 1,
  "cab": 1
]
```
