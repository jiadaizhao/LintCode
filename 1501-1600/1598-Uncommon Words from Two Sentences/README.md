# 1598. Uncommon Words from Two Sentences

Difficulty: Easy

https://www.lintcode.com/problem/uncommon-words-from-two-sentences/description

**Description**  
We are given two sentences A and B. (A sentence is a string of space separated words. Each word consists only of lowercase letters.)

A word is uncommon if it appears exactly once in one of the sentences, and does not appear in the other sentence.

Return a list of all uncommon words.

You may return the list in any order.

1. 0 <= A.length <= 200
2. 0 <= B.length <= 200
3. A and B both contain only spaces and lowercase letters.

**Example 1:**
```
Input: A = "this apple is sweet", B = "this apple is sour"
Output: ["sweet","sour"]
```

**Example 2:**
```
Input: A = "apple apple", B = "banana"
Output: ["banana"]
```
