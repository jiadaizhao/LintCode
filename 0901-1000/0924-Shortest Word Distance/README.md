# 924. Shortest Word Distance

Difficulty: Easy

https://www.lintcode.com/problem/shortest-word-distance/description

**Description**  
Given a list of words and two words word1 and word2, return the shortest distance between these two words in the list.

You may assume that word1 does not equal to word2, and word1 and word2 are both in the list.

**Example 1:**
```
Input：["practice", "makes", "perfect", "coding", "makes"],"coding","practice"
Output：3
Explanation：index("coding") - index("practice") = 3
```

**Example 2:**
```
Input：["practice", "makes", "perfect", "coding", "makes"],"makes","coding"
Output：1
Explanation：index("makes") - index("coding") = 1
```
