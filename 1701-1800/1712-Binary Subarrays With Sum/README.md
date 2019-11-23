# 1712. Binary Subarrays With Sum

Difficulty: Medium

https://www.lintcode.com/problem/binary-subarrays-with-sum/description

**Description**  
In an array A of 0s and 1s, how many non-empty subarrays have sum S?

* A.length <= 30000
* 0 <= S <= A.length
* A[i] is either 0 or 1.

**Example 1:**
```
Input: A = [1,0,1,0,1], S = 2
Output: 4
Explanation: 
The 4 subarrays are bolded below:
[1,0,1]
[1,0,1]
[1,0,1,0]
[0,1,0,1]
```

**Example 2:**
```
Input: A = [0,0,0,0,0,0,1,0,0,0], S = 0
Output: 27
Explanation: 
And 27 subarrays for S.
```
