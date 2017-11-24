# 718. Repeat String

Difficulty: Medium

http://www.lintcode.com/en/problem/repeat-string/

Write a function, give a string A consisting of N characters and a string B consisting of M characters, returns the number of times A must be stated such that B is a substring of the repeated string. If B can never be a substring of the repeated A, then your function should return -1.

**Notice**  
Assume that 0 <= N <= 1000, 1 <= M <= 1000

**Example**  
Given A = abcd, B = cdabcdab

your function should return 3, bcause after stating string A three times we otain the string abcdabcdabcd. String B is a substring of this string.
