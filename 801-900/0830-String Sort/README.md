# 830. String Sort

Difficulty: Easy

http://lintcode.com/en/problem/string-sort/

Given a string, sort the string with the first keyword which is the most commonly used characters and the second keyword which is the dictionary order.

**Notice**  
* The length of string is less than 10000.
* All characters are lowercase

**Example**  
Given str = “bloomberg”, return “bbooeglmr”.
```
Explanation:
'b' appears the most frequently, and the dictionary sequence is the smallest, so it is ranked first, followed by 'o'.
```
Given str = “lintcode”, return “cdeilnot”.
```
Explanation:
All characters appear the same number of times, so directly in accordance with the dictionary order.
```
