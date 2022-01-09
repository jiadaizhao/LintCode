# 1827. Number of Ways to Stay in the Same Place After Some Steps II

Difficulty: Hard

https://www.lintcode.com/problem/number-of-ways-to-stay-in-the-same-place-after-some-steps-ii/description

**Description**  
You have a pointer at index 00 in an array of size arrLenarrLen. At each step, you can move 11 position to the left, 11 position to the right in the array or stay in the same place (The pointer should not be placed outside the array at any time).

Given two integers stepssteps and arrLenarrLen, return the number of ways such that your pointer still at index 0 after exactly stepssteps steps.

Since the answer may be too large, return it modulo 10^9 + 7.

* 1≤steps≤500
* 1≤arrLen≤10^6
​​
**Example 1:**
```
Input: 
3
2
Output: 4
Explanation: There are 4 differents ways to stay at index 0 after 3 steps.
Right, Left, Stay
Stay, Right, Left
Right, Stay, Left
Stay, Stay, Stay
```

**Example 2:**
```
Input: 
2
4
Output: 2
Explanation: There are 2 differents ways to stay at index 0 after 2 steps
Right, Left
Stay, Stay
```

**Example 3**
```
Input: 
4
2
Output: 8
```
