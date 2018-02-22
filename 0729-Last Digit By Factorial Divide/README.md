# 729. Last Digit By Factorial Divide

Difficulty: Medium

http://www.lintcode.com/en/problem/last-digit-by-factorial-divide/

We are given two numbers A and B such that B >= A. We need to compute the last digit of this resulting F such that F = B! / A! where 1 <= A, B <= 10^18 (A and B are very large)

**Example**
```
Given A = 2, B = 4, return 2
A! = 2 and B! = 24, F = 24 / 2 = 12 --> last digit = 2

Given A = 107, B = 109, return 2
```