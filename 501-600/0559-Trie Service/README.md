# 559. Trie Service

Difficulty: Medium

http://www.lintcode.com/en/problem/trie-service/

Build tries from a list of pairs. Save top 10 for each node.

**Example**  
Given a list of
```
<"abc", 2>
<"ac", 4>
<"ab", 9>
```
Return <a[9,4,2]<b[9,2]<c[2]<>>c[4]<>>>, and denote the following tree structure:
```
         Root
         / 
       a(9,4,2)
      /    \
    b(9,2) c(4)
   /
 c(2)
```
