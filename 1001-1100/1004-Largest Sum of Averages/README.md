# 1004. Largest Sum of Averages

Difficulty: Medium

https://www.lintcode.com/problem/largest-sum-of-averages/description

**Description**  
We partition a row of numbers A into at most K adjacent (non-empty) groups, then our score is the sum of the average of each group. What is the largest score we can achieve?

Note that our partition must use every number in A, and that scores are not necessarily integers.

* 1 <= A.length <= 100.
* 1 <= A[i] <= 10000.
* 1 <= K <= A.length.
* Answers within 10^-6 of the correct answer will be accepted as correct.

**Example 1:**
```
Input: 
[9,1,2,3,9]
3
Output: 20
Explanation: 
The best choice is to partition A into [9], [1, 2, 3], [9]. The answer is 9 + (1 + 2 + 3) / 3 + 9 = 20.
We could have also partitioned A into [9, 1], [2], [3, 9], for example.
That partition would lead to a score of 5 + 2 + 6 = 13, which is worse.
```

**Example 2:**
```
Input:
[9,3]
2
Output: 12
```
