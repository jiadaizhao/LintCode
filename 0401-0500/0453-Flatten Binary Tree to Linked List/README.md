# 453. Flatten Binary Tree to Linked List

Difficulty: Easy

http://lintcode.com/en/problem/flatten-binary-tree-to-linked-list/

Remove all elements from a linked list of integers that have value val.Flatten a binary tree to a fake "linked list" in pre-order traversal.

Here we use the right pointer in TreeNode as the next pointer in ListNode.

**Notice**  

Don't forget to mark the left child of each node to null. Or you will get Time Limit Exceeded or Memory Limit Exceeded.

**Example**  
```
            1
               \
     1          2
    / \          \
   2   5    =>    3
  / \   \          \
 3   4   6          4
                     \
                      5
                       \
                        6
```
