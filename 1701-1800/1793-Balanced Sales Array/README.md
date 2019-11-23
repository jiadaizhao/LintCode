# 1793. Balanced Sales Array

Difficulty: Easy

https://www.lintcode.com/problem/balanced-sales-array/description

**Description**  
Given has an array of sales numbers, what is the index of the smallest index element for which the sums of all elements to the left and to the right are equal. The array may not be reordered.
For example, given the array sales = [1, 2, 3, 4, 6],we see that 1+2+3=6，Using zero based indexing,sales[3] = 4 is the value sought.The index is 3.

* 3 <= n <= 10^5
* 1 <= sales[i] <= 2*10^4,where 0 <= i < n
*  It is guaranteed that a solution always exists

**Example 1:**
```
Input : [1, 2, 3, 4, 6]
Output : 3
```
