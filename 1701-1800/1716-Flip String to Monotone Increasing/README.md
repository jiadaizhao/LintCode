# 1716. Flip String to Monotone Increasing

Difficulty: Medium

https://www.lintcode.com/problem/flip-string-to-monotone-increasing/description

**Description**  
A string of '0's and '1's is monotone increasing if it consists of some number of '0's (possibly 0), followed by some number of '1's (also possibly 0.)

We are given a string S of '0's and '1's, and we may flip any '0' to a '1' or a '1' to a '0'.

Return the minimum number of flips to make S monotone increasing.

* 1≤S.length≤20000
* S only consists of '0' and '1' characters.

**Example 1:**
```
Input: "00110"
Output: 1
Explanation: 
We flip the last digit to get 00111.
```

**Example 2:**
```
Input: "010110"
Output: 2
Explanation: 
We flip to get 011111, or alternatively 000111.
```
