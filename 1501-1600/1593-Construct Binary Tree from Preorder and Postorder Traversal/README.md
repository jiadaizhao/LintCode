# 1593. Construct Binary Tree from Preorder and Postorder Traversal

Difficulty: Medium

https://www.lintcode.com/problem/construct-binary-tree-from-preorder-and-postorder-traversal/description

**Description**  
Return any binary tree that matches the given preorder and postorder traversals.

Values in the traversals pre and post are distinct positive integers.

* 1 <= pre.length == post.length <= 30
* pre[] and post[] are both permutations of 1, 2, ..., pre.length.
* It is guaranteed an answer exists. If there exists multiple answers, you can return any of them.

**Example 1:**
```
Input：pre = [1,2,4,5,3,6,7], post = [4,5,2,6,7,3,1]
Output：[1,2,3,4,5,6,7]
Explanation：
     1
    / \
   2   3
  / \ / \
 4  5 6  7
```

**Example 2:**
```
Input：pre = [1,2,3,4], post = [3,2,4,1]
Output：[1,2,4,3]
Explanation：
   1
  / \
 2   4
 /
3
```
