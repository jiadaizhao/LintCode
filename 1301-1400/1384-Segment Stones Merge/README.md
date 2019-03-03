# 1384. Segment Stones Merge

Difficulty: Super

https://www.lintcode.com/problem/segment-stones-merge/description

**Description**  
There is a game of stone merging. At the beginning, there were n piles of stones arranged in a row. The goal was to combine all the stones into a pile. The consolidation rules are as follows:

Each time you can merge consecutive x piles, left <= x <= right.
The cost of each merger is the sum of the weight of the combined x piles.
Find the minimum merge cost, if you cannot complete the merge return 0.

* 1 <= n <= 100，2 <= left <= right <= n
* 1 <= weight[i] <= 1000

**Example**  
```
Given n = 4, left = 3, right = 3, weight = [1,2,3,4], return 0.

Explanation:
Unable to complete the merge.
Given n = 3, left = 2, right = 3, weight = [1,2,3], return 6.

Explanation:
Merge 1,2,3, the merger cost is 1 + 2 + 3 = 6.
```
