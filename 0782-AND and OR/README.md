# 782. AND and OR

Difficulty: Medium

http://www.lintcode.com/en/problem/and-and-or/

Give n non-negative integers, find the sum of maximum OR sum, minimum OR sum, maximum AND sum, minimum AND sum.

**Notice**  
* maximum OR sum: In n numbers, take a number of numbers(cannot take nothing), The largest number after the OR operation.
* minimum OR sum: In n numbers, take a number of numbers(cannot take nothing), The smallest number after the OR operation.
* maximum AND sum: In n numbers, take a number of numbers(cannot take nothing), The largest number after the AND operation.
* minimum AND sum: In n numbers, take a number of numbers(cannot take nothing), The smallest number after the AND operation.
* 1 <= n <= 1000000，0 <= nums[i] <= 2^32 - 1.

**Example**  
Give n = 3, nums = [1, 2, 3], return 7.
```
Explanation:
maximum OR sum: 3, minimum OR sum: 1, maximum AND sum: 3, minimum AND sum: 0.
result: 3 + 1 + 3 + 0 = 7.
```
Give n = 3, nums = [0, 0, 1], return 2.
```
Explanation:
maximum OR sum: 1, minimum OR sum: 0, maximum AND sum: 1, minimum AND sum: 0.
result: 1 + 0 + 1 + 0 = 2.
```
Give n = 5, nums = [12313, 156, 4564, 212, 12], return 25090.
```
Explanation:
maximum OR sum: 12765, minimum OR sum: 12, maximum AND sum: 12313, minimum AND sum: 0.
result: 12765 + 12 + 12313 = 25090
```
Give n = 3, nums = [111111, 333333, 555555], return 1588322.
```
Explanation:
maximum OR sum: 917047, minimum OR sum: 111111, maximum AND sum: 555555, minimum AND sum: 4609.
result: 917047+ 111111+ 555555+ 4609 = 1588322.
```
