# 1511. Mirror Reflection

Difficulty: Medium

https://www.lintcode.com/problem/mirror-reflection/description

**Description**  
There is a special square room with mirrors on each of the four walls. Except for the southwest corner, there are receptors on each of the remaining corners, numbered 0, 1, and 2.

The square room has walls of length p, and a laser ray from the southwest corner first meets the east wall at a distance q from the 0th receptor.

Return the number of the receptor that the ray meets first. (It is guaranteed that the ray will meet a receptor eventually.)

* 1 <= p <= 1000
* 0 <= q <= p

**Example 1:**
```
Input: p = 2, q = 1
Output: 2
Explanation: The ray meets receptor 2 the first time it gets reflected back to the left wall.
```

**Example 2:**
```
Input: p = 3, q = 1
Output: 1
Explanation: The ray meets receptor 1 the first time it gets reflected back to the left wall.
```
