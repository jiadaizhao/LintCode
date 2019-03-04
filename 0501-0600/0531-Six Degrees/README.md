# 531. Six Degrees

Difficulty: Medium

http://www.lintcode.com/en/problem/six-degrees/

Six degrees of separation is the theory that everyone and everything is six or fewer steps away, by way of introduction, from any other person in the world, so that a chain of "a friend of a friend" statements can be made to connect any two people in a maximum of six steps.

Given a friendship relations, find the degrees of two people, return -1 if they can not been connected by friends of friends.

**Example**  
Gien a graph:
```
1------2-----4
 \          /
  \        /
   \--3--/
```
{1,2,3#2,1,4#3,1,4#4,2,3} and s = 1, t = 4 return 2

Gien a graph:
```
1      2-----4
             /
           /
          3
```
{1#2,4#3,4#4,2,3} and s = 1, t = 4 return -1
