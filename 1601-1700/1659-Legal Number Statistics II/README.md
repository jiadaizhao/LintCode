# 1659. Legal Number Statistics II

Difficulty: Easy

https://www.lintcode.com/problem/legal-number-statistics-ii/description

**Description**  
Given n integers and m queries, each query containing two integers L, R, for each quey output how many integers are in the range between [L, R].

**Example 1:**
```
Input: a=[1,2,3,4,5,6],q=[[1,2],[1,5]]
Output: [2,5]
Explanation:
For query[1,2], there are a[0],a[1] are legal.
For query[1,5], there are a[0],a[1],a[2],a[3],a[4] are legal
```

**Example 2:**
```
Input : a=[1,5,3,3,3,2],q=[[1,2]]
Output: [2]
Explanation:
For query[1,2], only a[0],a[5] are legal.
```
