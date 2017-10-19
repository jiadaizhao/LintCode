# 471. Top K Frequent Words

Difficulty: Medium

http://lintcode.com/en/problem/top-k-frequent-words/

Given a list of words and an integer k, return the top k frequent words in the list.

**Notice**  

You should order the words by the frequency of them in the return list, the most frequent one comes first. If two words has the same frequency, the one with lower alphabetical order come first.

**Example**  
Given
```
[
    "yes", "lint", "code",
    "yes", "code", "baby",
    "you", "baby", "chrome",
    "safari", "lint", "code",
    "body", "lint", "code"
]
```
for k = 3, return ["code", "lint", "baby"].

for k = 4, return ["code", "lint", "baby", "yes"],
