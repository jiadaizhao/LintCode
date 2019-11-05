# 930. Connected Components in List

Difficulty: Medium

https://www.lintcode.com/problem/connected-components-in-list/description

**Description**  
Given a doubly linked list and an array of nodes. If the nodes are connected with each other(which means we can access any nodes through any one of them), we can consider them as one block. Find the number of blocks in the given array.

You can assume that there is no duplicate node in the given doubly linked list.

**Example 1:**
```
Input：1<->2<->3<->4,[1,3,4]
Output：2
Explanation：There is no node connected with 1, and node 3 is connected with 4. So the number of blocks is 2.
```

**Example 2:**
```
Input：1<->2<->3<->4,[1,2,3,4]
Output：1
Explanation：All nodes  are connected.So the number of blocks is 1.
```
