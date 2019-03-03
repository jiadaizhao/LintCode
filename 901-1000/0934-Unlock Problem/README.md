# 934. Unlock Problem

Difficulty: Medium

http://www.lintcode.com/en/problem/unlock-problem/

Given n keys(numbered from 1 to n) and m locks(numbered from 1 to m). When the number of the lock can be divisible by the number of the key, the lock can be opened/closed. Initially, all locks are locked, then use all keys to unlock all locks, find the number of locks which is opened in the end.

**Notice**  
* 1 <= m, n <= 10^5

**Example**  
Given n = 1, m = 1, return 1.
```
Explanation:
The lock numbered 1 has been unlocked.
```
Given n = 2, m = 5, return 3.
```
Explanation:
The locks numbered 1,3,5 have been opened.
```
