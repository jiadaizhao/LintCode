# 121. Word Ladder II

Difficulty: Hard

http://lintcode.com/en/problem/word-ladder-ii/

Given two words (start and end), and a dictionary, find all shortest transformation sequence(s) from start to end, such that:

1. Only one letter can be changed at a time
2. Each intermediate word must exist in the dictionary

**Notice**  
* All words have the same length.
* All words contain only lowercase alphabetic characters.

**Example**  
``` 
Given:
start = "hit"
end = "cog"
dict = ["hot","dot","dog","lot","log"]
Return
  [
    ["hit","hot","dot","dog","cog"],
    ["hit","hot","lot","log","cog"]
  ]
```
