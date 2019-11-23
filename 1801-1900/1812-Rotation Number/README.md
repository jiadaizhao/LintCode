# 1812. Rotation Number

Difficulty: Easy

https://www.lintcode.com/problem/rotation-number/description

**Description**  
Give you a positive integer n, Rotations Number is a number that rotates by 180° after each digit, and is not equal to its own number. You should find all the numbers that satisfy the definition of the Rotation Number in the range of 1 - n and return an array res. For example, 8069->8096, 769 cannot be rotated because 7 is not a number after 180° rotation

* 1 =< n <= 10000
* 0 <= res[i] <= n
* The numbers are only 0, 6, 8, 9 and can be rotated, where 0->0, 6->9, 8->8, 9->6,

**Example 1:**
```
Input:
n = 10
Output: [6, 9]
```
