# 1645. Least Subsequences

Difficulty: Medium

https://www.lintcode.com/problem/least-subsequences/description

**Description**  
Given an array with n integers. Splitting it into subsequences of strictly descending order.
Output the minimum number of subsequences you can get by splitting.

**Example**  
Example1
```
Input: [5,2,4,3,1,6]
Output: 3
Explanation:
You can split this array into : [5,2,1], [4,3], [6]. And there are 3 subsequences you get.﻿ 
Or you can split it into [5, 4, 3],[2,1], [6] also 3 subsequences.
But [5, 4, 3, 2, 1], [6] is not legal because [5, 4, 3, 2, 1] is not a subsuquence of the original array.
```
Example2
```
input: [1, 1, 1]
Output: 3
Explanation: Because of the strictly descending order you must split it into 3 subsequences: [1],[1],[1]
```

**Challenge**  
Deal it with the complexity: o(nlogn)
