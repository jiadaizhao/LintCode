# 937. How Many Problem Can I Accept

Difficulty: Medium

https://www.lintcode.com/problem/how-many-problem-can-i-accept/description

**Description**  
Given a positive integer n representing the time of one competition. The difficulty of the problem in the game is increasing. You need to spend k × i time for each question you complete, where k is the input coefficient and i is the number of the problem (starting from 1). Find the maximum number of problems you can complete.

1<=n<=2^61-1 1<=k<=50

**Example**  
```
Given n = 30, k = 1, return 7.

Explanation:
Because 1 * 1 + 1 * 2 + 1 * 3 + 1 * 4 + 1 * 5 + 1 * 6 + 1 * 7 = 28 < 30 and 1 * 1 + 1 * 2 + 1 * 3 + 1 * 4 + 1 * 5 + 1 * 6 + 1 * 7 + 1 * 8 = 36 > 30
```
