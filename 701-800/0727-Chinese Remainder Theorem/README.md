# 727. Chinese Remainder Theorem

Difficulty: Hard

http://www.lintcode.com/en/problem/chinese-remainder-theorem/

We are given two arrays num[0..k-1] and rem[0..k-1]. In num[0..k-1], every pair is coprime (gcd for every pair is 1. We need to find minimum positive number x such that:
```
     x % num[0]    =  rem[0], 
     x % num[1]    =  rem[1], 
     .......................
     x % num[k-1]  =  rem[k-1] 
```

**Example**
```
Given  nums = [3, 4, 5], rems = [2, 3, 1], return 11
11 is the smallest number such that:
- When we divide it by 3, we get remainder 2. 
- When we divide it by 4, we get remainder 3.
- When we divide it by 5, we get remainder 1. 
```
