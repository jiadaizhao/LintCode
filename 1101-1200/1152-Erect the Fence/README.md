# 1152. Erect the Fence

Difficulty: Hard

https://www.lintcode.com/problem/erect-the-fence/description

**Description**  
There are some trees, where each tree is represented by (x,y) coordinate in a two-dimensional garden. Your job is to fence the entire garden using the minimum length of rope as it is expensive. The garden is well fenced only if all the trees are enclosed. Your task is to help find the coordinates of trees which are exactly located on the fence perimeter.

1. All trees should be enclosed together. You cannot cut the rope to enclose trees that will separate them in more than one group.
2. All input integers will range from 0 to 100.
3. The garden has at least one tree.
4. All coordinates are distinct.
5. Input points have NO order. No order required for output.

**Example 1:**  
```
Input: [[1,1],[2,2],[2,0],[2,4],[3,3],[4,2]]
Output: [[1,1],[2,0],[4,2],[3,3],[2,4]]
```

**Example 2:**  
```
Input: [[1,2],[2,2],[4,2]]
Output: [[1,2],[2,2],[4,2]]
```
