# 831. 3Sum II

Difficulty: Medium

http://lintcode.com/en/problem/3sum-ii/

Given n, find the number of solutions for all x, y, z that conforms to x^2+y^2+z^2 = n.(x, y, z are non-negative integers)

**Notice**  
* n <= 1000000
* x, y, z satisfy (x <= y <= z), we can consider that is the same solution as long as the three numbers selected are the same

**Example**  
Given n = 0, return 1.
```
Explanation:
When x = 0, y = 0, z = 0, the equation holds.
```
Given n = 1, return 1.
```
Explanation:
When one of them is 1 and the remaining two are 0, there is a total of 1 solution.
```
