# 1367. Police Distance

Difficulty: Medium

https://lintcode.com/problem/police-distance/description

Given a matrix size of n x m, element 1 represents policeman, -1 represents wall and 0 represents empty.  
Now please output a matrix size of n x m, output the minimum distance between each empty space and the nearest policeman

**Notice**  
* Given a matrix size of n x m， n <= 200，m <= 200.
* We guarantee that each empty space can be reached by one policeman at least.

**Example**  
Given mat =
```
[
    [0, -1, 0],
    [0, 1, 1],
    [0, 0, 0]
]
```
return [[2,-1,1],[1,0,0],[2,1,1]].
```
The distance between the policeman and himself is 0, the shortest distance between the two policemen to other empty space is as shown above
```
Given mat =
```
[
    [0, -1, -1],
    [0, -1, 1],
    [0, 0, 0]
]
```
return [[5,-1,-1],[4,-1,0],[3,2,1]]。
```
The shortest distance between the policemen to other 5 empty space is as shown above.
```
