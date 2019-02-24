# 1277. Water and Jug Problem

Difficulty: Medium

https://www.lintcode.com/problem/water-and-jug-problem/description

**Description**  
You are given two jugs with capacities x and y litres. There is an infinite amount of water supply available. You need to determine whether it is possible to measure exactly z litres using these two jugs.

If z liters of water is measurable, you must have z liters of water contained within one or both buckets by the end.

Operations allowed:

* Fill any of the jugs completely with water.
* Empty any of the jugs.
* Pour water from one jug into another till the other jug is completely full or the first jug itself is empty.

**Example**  
```
Input: x = 3, y = 5, z = 4
Output: True

Input: x = 2, y = 6, z = 5
Output: False
```
