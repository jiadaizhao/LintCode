# 1562. Number of restaurants

Difficulty: Medium

https://www.lintcode.com/problem/number-of-restaurants/description

**Description**  
Give a List of data representing the coordinates[x,y] of each restaurant and the customer is at the origin[0,0]. Find n closest restaurants to the customer, where m is the furthest distance from n restaurants to the customer. If there are more than n restaurants in the list and the distance from the customer is not greater than m, then the first n restaurants will be returned in the order of the elements in the list.

1. Coordinates in range [-1000,1000]
2. n>0
3. No same coordinates

**Example**  
```
Given : n = 2 , List = [[0,0],[1,1],[2,2]]
Return : [[0,0],[1,1]]
Given : n = 3,List = [[0,1],[1,2],[2,1],[1,0]]
Return :[[0,1],[1,2],[2,1]]
```
