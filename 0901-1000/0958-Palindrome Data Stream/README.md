# 958. Palindrome Data Stream

Difficulty: Easy

http://www.lintcode.com/en/problem/palindrome-data-stream/

There is a data stream, one letter at a time, and determine whether the current stream's arrangement can form a palindrome.

**Notice**  
* 1 <= |s| <= 10^5

**Example**  
Given s = ['a','a','a','a','a'], return [1,1,1,1,1].
```
Explanation:
“a” can form a palindrome
“aa” can form a palindrome
“aaa” can form a palindrome
“aaaa” can form a palindrome
“aaaaa” can form a palindrome
```
Given s = ['a','b','a']，return [1,0,1].
```
Explanation:
“a” can form a palindrome
“ab” can't form a palindrome
“aba” can form a palindrome
```
