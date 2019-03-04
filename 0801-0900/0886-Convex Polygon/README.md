# 886. Convex Polygon

Difficulty: Medium

http://www.lintcode.com/en/problem/convex-polygon/

Given a list of points that form a polygon when joined sequentially, find if this polygon is convex (Convex polygon definition).

**Notice**  
1. There are at least 3 and at most 10,000 points.
2. Coordinates are in the range -10,000 to 10,000.
3. You may assume the polygon formed by given points is always a simple polygon (Simple polygon definition). In other words, we ensure that exactly two edges intersect at each vertex, and that edges otherwise don't intersect each other.

**Example**  
Given points = [[0, 0], [0, 1], [1, 1], [1, 0]],  
return True.  
Explanation:  
![alt text](E3N5G.png)

Given points = [[0, 0], [0, 10], [10, 10], [10, 0], [5, 5]],  
return False.

Explanation  
![alt text](E3f02.png)
