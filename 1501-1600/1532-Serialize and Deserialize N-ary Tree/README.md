# 1532. Serialize and Deserialize N-ary Tree

Difficulty: Hard

https://www.lintcode.com/problem/serialize-and-deserialize-n-ary-tree/description

**Description**  
Serialization is the process of converting a data structure or object into a sequence of bits so that it can be stored in a file or memory buffer, or transmitted across a network connection link to be reconstructed later in the same or another computer environment.

Design an algorithm to serialize and deserialize an N-ary tree. An N-ary tree is a rooted tree in which each node has no more than N children. There is no restriction on how your serialization/deserialization algorithm should work. You just need to ensure that an N-ary tree can be serialized to a string and this string can be deserialized to the original tree structure.

For example, you may serialize the following 3-ary tree
![ex](narytreeexample.png)

as [1 [3[5 6] 2 4]]. You do not necessarily need to follow this format, so please be creative and come up with different approaches yourself.

**Example 1:**
```
Input：{1,3,2,4#2#3,5,6#4#5#6}
Output：{1,3,2,4#2#3,5,6#4#5#6}
Explanation：Pictured above
```

**Example 2:**
```
Input：{1,3,2#2#3}
Output：{1,3,2#2#3}
Explanation：
      1
	 / \
	3   2
```