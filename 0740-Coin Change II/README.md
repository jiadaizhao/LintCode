# 740. Coin Change II

Difficulty: Medium

http://www.lintcode.com/en/problem/coin-change-ii/

You are given coins of different denominations and a total amount of money. Write a function to compute the number of combinations that make up that amount. You may assume that you have infinite number of each kind of coin.

**Notice**
```
You can assume below:

* 0 <= amount <= 5000
* 1 <= coin <= 5000
* the number of coins is less than 500
* the answer is guaranteed to fit into signed 32-bit integer
```

**Example**  
```
Given amount = 10, coins = [10], return 1

Given amount = 8, coins = [2, 3, 8], return 3
there are three ways to make up the amount:
8 = 8
8 = 3 + 3 + 2
8 = 2 + 2 + 2 + 2
```
