# 7. Binary Tree Serialization

Difficulty: Medium

http://www.lintcode.com/en/problem/binary-tree-serialization/

Design an algorithm and write code to serialize and deserialize a binary tree. Writing the tree to a file is called 'serialization' and reading back from the file to reconstruct the exact same binary tree is 'deserialization'.

**Notice**

There is no limit of how you deserialize or serialize a binary tree, LintCode will take your output of serialize as the input of deserialize, it won't check the result of serialize.

**Example**
An example of testdata: Binary tree {3,9,20,#,#,15,7}, denote the following structure:
```
  3
 / \
9  20
  /  \
 15   7
```
Our data serialization use bfs traversal. This is just for when you got wrong answer and want to debug the input.

You can use other method to do serializaiton and deserialization.

**Tags**
Binary Tree, Uber, Microsoft, Yahoo
