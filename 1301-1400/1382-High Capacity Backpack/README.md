# 1382. High Capacity Backpack

Difficulty: Medium

https://www.lintcode.com/problem/high-capacity-backpack/description

**Description**  
Given a backpack capacity s, giving n items, the value of the i-th item is vi, the volume of the i-th item is ci, ask how much worth of the item the backpack can hold, and output this maximum value. (Each item can only be used once)

* 1 <= s, vi, ci <= 10^13
* 1 <= n <= 31

**Example**  
```
Given s = 10, v = [1,2,3], c = [3,5,7], return 4.

Explanation:
Put the 0th item and the 2nd item in the backpack.
Given s = 10, v = [1,5,3], c = [4,5,7], return 6.

Explanation:
Put the 0th item and the 1st item in the backpack.
```
