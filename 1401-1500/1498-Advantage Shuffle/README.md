# 1498. Advantage Shuffle

Difficulty: Medium

https://www.lintcode.com/problem/advantage-shuffle/description

**Description**  
Given two arrays A and B of equal size, the advantage of A with respect to B is the number of indices i for which A[i] > B[i].

Return any permutation of A that maximizes its advantage with respect to B.

* 1 <= A.length = B.length <= 10000
* 0 <= A[i] <= 10^9
* 0 <= B[i] <= 10^9

**Example 1:**
```
Input: A = [2,7,11,15], B = [1,10,4,11]
Output: [2,11,7,15]
Explaination: 
A[0] < B[0], A[1] > B[1], A[2] > B[2], A[3] > B[3]
So the biggest advantage is 3
```

**Example 2:**
```
Input: [12,24,8,32], B = [13,25,32,11]
Output: [24,32,8,12]
Explaination: 
For [24, 32, 8, 12], A[0] > B[0], A[1] > B[1], A[2] < B[2], A[3] < B[3]
The biggest advantage is 2
```
