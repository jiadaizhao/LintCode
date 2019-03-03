# 432. Find the Weak Connected Component in the Directed Graph

Difficulty: Medium

http://www.lintcode.com/en/problem/find-the-weak-connected-component-in-the-directed-graph/

Find the number Weak Connected Component in the directed graph. Each node in the graph contains a label and a list of its neighbors. (a connected set of a directed graph is a subgraph in which any two vertices are connected by direct edge path.)

**Notice**  

Sort the element in the set in increasing order

**Example**  
Given graph:
```
A----->B  C
 \     |  | 
  \    |  |
   \   |  |
    \  v  v
     ->D  E <- F
```
Return {A,B,D}, {C,E,F}. Since there are two connected component which are {A,B,D} and {C,E,F}