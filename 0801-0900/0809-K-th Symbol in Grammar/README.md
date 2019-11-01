# 809. K-th Symbol in Grammar

Difficulty: Medium

https://www.lintcode.com/problem/k-th-symbol-in-grammar/description

**Description**  
On the first row, we write a 0. Now in every subsequent row, we look at the previous row and replace each occurrence of 0 with 01, and each occurrence of 1 with 10.

Given row N and index K, return the K-th indexed symbol in row N. (The values of K are 1-indexed.) (1 indexed).

1. N will be an integer in the range [1, 30].
2. K will be an integer in the range [1, 2^(N-1)].

**Example 1:**
```
Input： N = 1, K = 1
Output：0
Explanation：
row 1: 0   
```

**Example 2:**
```
Input：N = 2, K = 1
Output：0
Explanation：
row 1: 0
row 2: 01     
```

**Example 3:**
```
Input：N = 2, K = 2
Output：1
Explanation：
row 1: 0
row 2: 01
```

**Example 4:**
```
Input：N = 4, K = 5
Output：1
Explanation：
row 1: 0
row 2: 01
row 3: 0110
row 4: 01101001
```
