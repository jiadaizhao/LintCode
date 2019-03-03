# 661. Convert BST to Greater Tree

Difficulty: Easy

http://www.lintcode.com/en/problem/convert-bst-to-greater-tree/

Given a Binary Search Tree (BST), convert it to a Greater Tree such that every key of the original BST is changed to the original key plus sum of all keys greater than the original key in BST.

**Example**  
Given a binary search Tree `{5,2,13}｀:
```
              5
            /   \
           2     13
```
Return the root of new tree
```
             18
            /   \
          20     13
```
