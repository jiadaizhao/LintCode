# 1644. Plane Maximum Rectangle

Difficulty: Medium

https://www.lintcode.com/problem/plane-maximum-rectangle/description

**Description**  
Given a n point on the two-dimensional coordinate system, output the maximum area of the rectangle that consisting of four points. If it cannot form a rectangle, output 0

* n <= 1000
* 0 <= x,y <= 1000
* each side of the rectangle is required to be perpendicular to the X or Y axis

**Example**  
```
a = [[1,1],[1,2],[2,1],[2,2],[2,3],[3,2],[3,1]], return 2

The four points selected are: [1,1], [1,2], [3,1], [3,2]
a = [[1,1],[1,2],[2,2],[2,3],[3,3],[3,4],[4,4]], return 0

No four points can form a rectangle
```
