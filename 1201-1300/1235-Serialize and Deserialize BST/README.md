# 1235. Serialize and Deserialize BST

Difficulty: Medium

https://www.lintcode.com/problem/serialize-and-deserialize-bst/description

**Description**  
Serialization is the process of converting a data structure or object into a sequence of bits so that it can be stored in a file or memory buffer, or transmitted across a network connection link to be reconstructed later in the same or another computer environment.

Design an algorithm to serialize and deserialize a binary search tree. There is no restriction on how your serialization/deserialization algorithm should work. You just need to ensure that a binary search tree can be serialized to a string and this string can be deserialized to the original tree structure.

The encoded string should be as compact as possible.

Note: Do not use class member/global/static variables to store states. Your serialize and deserialize algorithms should be stateless.

**Example 1:**
```
Input：[2,1,3]
Output：[2,1,3]
Explanation：
     2
    / \
   1   3
```

**Example 2:**
```
Input：[1,#,2]
Output：[1,#,2]
Explanation：
  1
   \
    2
```
