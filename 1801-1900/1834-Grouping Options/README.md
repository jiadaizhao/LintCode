# 1834. Grouping Options

Difficulty: Hard

https://www.lintcode.com/problem/grouping-options/description

**Description**  
There are nn people in a row. They must all be divided into mm contiguous groups from left to right. If each group must be at least as large as the group to its left, determine how many distinct ways groups can be formed. For a group to be distinct, it must differ in size for at least one group when sorted ascending. For example, [1, 1, 1, 3] is distinct from [1, 1, 1, 2] but not from [1, 3, 1, 1].

1≤n,m≤200

**Example 1:**
```
Input:
8
4
Output: 5
Explanation: [1, 1, 1, 5], [1, 1, 2, 4], [1, 1, 3, 3], [1, 2, 2, 3], [2, 2, 2, 2]
```
