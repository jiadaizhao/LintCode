# 739. Compute 24 Game

Difficulty: Hard

http://www.lintcode.com/en/problem/compute-24-game/

You have 4 cards each containing a number from 1 to 9. You need to compute whether they could operated through *, /, +, -, (, ) to get the value of 24.

**Notice**
```
* The division operator / represents real division, not integer division. so 4 / (1 - 2/3) = 12.
* Every operation done is between two numbers. In particular, we cannot use - as a unary operator. For example, with [1, 1, 1, 1] as input, the expression -1 - 1 - 1 - 1 is not allowed.
* You cannot concatenate numbers together. For example, if the input is [1, 2, 1, 2], we cannot write this as 12 + 12.
```

**Example**  
```
Given nums = [4, 1, 8, 7], return true // 8 * （7 - 4） * 1 = 24

Given nums = [1, 1, 1, 2], return false

Given nums = [3, 3, 8, 8], return true // 8 / ( 3 - 8 / 3) = 24
```
