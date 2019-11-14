# 1530. Encode N-ary Tree to Binary Tree

Difficulty: Hard

https://www.lintcode.com/problem/encode-n-ary-tree-to-binary-tree/description

**Description**  
Design an algorithm to encode an N-ary tree into a binary tree and decode the binary tree to get the original N-ary tree. An N-ary tree is a rooted tree in which each node has no more than N children. Similarly, a binary tree is a rooted tree in which each node has no more than 2 children. There is no restriction on how your encode/decode algorithm should work. You just need to ensure that an N-ary tree can be encoded to a binary tree and this binary tree can be decoded to the original N-nary tree structure.

For example, you may encode the following 3-ary tree to a binary tree in this way:

Note that the above is just an example which might or might not work. You do not necessarily need to follow this format, so please be creative and come up with different approaches yourself.

1. N∈[1,1000]
2. Do not use class member/global/static variables to store states. Your encode and decode algorithms should be stateless.

**Example 1:**
```
Input : {1,3,2,4#2#3,5,6#4#5#6}
Output: [1,3,5,6,2,4]
```
