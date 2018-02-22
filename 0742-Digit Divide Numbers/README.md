# 742. Digit Divide Numbers

Difficulty: Medium

http://www.lintcode.com/en/problem/digit-divide-numbers/

A Digit Divide Numbers is a number that is divisible by every digit it contains.

For example, 128 is a Digit Divide Numbers because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.

Also, Digit Divide Numbers is not allowed to contain the digit zero.

Given a lower and upper number bound, output a list of every possible Digit Divide Numbers, including the bounds if possible.

**Notice**  
0<=L<=R<=2^31-1,R-L<=10^6

**Example**  
```
Given left = 1, right = 22, return [1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 15, 22]
```
