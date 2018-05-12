# 1365. Minimum Cycle Section

Difficulty: Hard

https://lintcode.com/problem/minimum-cycle-section/description

Given an array of int, find the length of the minimum cycle section.

**Notice**  
* The length of array do not exceed 100000。
* Each element is in the int range 。

**Example**  
Given array = [1,2,1,2,1,2], return 2.
```
Explanation:
The minimum cycle section is [1,2]，and the length is 2.
```
Given array = [1,2,1,2,1], return 2.
```
Explanation:
The minimum cycle section is [1,2]，and the length is 2, although the last 2 is not given, we still consider the cycle section is [1,2].
```
Given array = [1,2,1,2,1,4], return 6.
```
Explanation:
The minimum cycle section is [1,2,1,2,1,4], and the length is 6.
```
