# 734. Number of Subsequences of Form a^i b^j c^k

Difficulty: Medium

http://www.lintcode.com/en/problem/number-of-subsequences-of-form-ai-bj-ck/

Given a string, count number of subsequences of the form a^i b^j c^ k, i.e., it consists of i a characters, followed by j b characters, followed by k c characters where i >= 1, j >=1 and k >= 1.

Note: Two subsequences are considered different if the set of array indexes picked for the 2 subsequences are different.

**Example**  
```
Given s = abbc, return 3
Subsequences are abc, abc and abbc

Given s = abcabc, return 7
Subsequences are abc, abc, abbc, aabc, abcc, abc and abc
```
