# 1240. Path Sum III

Difficulty: Easy

https://www.lintcode.com/problem/path-sum-iii/description

**Description**  
You are given a binary tree in which each node contains an integer value.

Find the number of paths that sum to a given value.

The path does not need to start or end at the root or a leaf, but it must go downwards (traveling only from parent nodes to child nodes).

The tree has no more than 1,000 nodes and the values are in the range -1,000,000 to 1,000,000.

**Example 1:**
```
Input：root = [10,5,-3,3,2,null,11,3,-2,null,1], sum = 8
Output：3
Explanation：
      10
     /  \
    5   -3
   / \    \
  3   2   11
 / \   \
3  -2   1

Return 3. The paths that sum to 8 are:

1.  5 -> 3
2.  5 -> 2 -> 1
3. -3 -> 11
```

**Example 2:**
```
Input：root = [11,6,-3], sum = 17
Output：1
Explanation：
      11
     /  \
    6   -3
Return 17. The path that sum to 17 is:

1.  11 -> 6
```
