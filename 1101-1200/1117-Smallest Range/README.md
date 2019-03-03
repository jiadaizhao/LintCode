# 1117. Smallest Range

Difficulty: Hard

https://www.lintcode.com/problem/smallest-range/description

**Description**  
You have k lists of sorted integers in ascending order. Find the smallest range that includes at least one number from each of the k lists.

1. the range [a,b] is smaller than range [c,d] if b-a < d-c or a < c if b-a == d-c.
2. The given list may contain duplicates, so ascending order means >= here.
3. 1 <= k <= 3500
4. -105 <= value of elements <= 105.

**Example**  
Example 1:
```
Input:[[4,10,15,24,26], [0,9,12,20], [5,18,22,30]]
Output: [20,24]
Explanation: 
List 1: [4, 10, 15, 24,26], 24 is in range [20,24].
List 2: [0, 9, 12, 20], 20 is in range [20,24].
List 3: [5, 18, 22, 30], 22 is in range [20,24].
```
