# 1421. Matrix Game

Difficulty: Easy

https://www.lintcode.com/problem/matrix-game/description

**Description**  
Two people choose numbers in a matrix. Everyone chooses the best number.
The selected column can‘t selected anymore. you should return the difference between two people at last.

**Example 1:**  
```
Input:
grids:[[1,4,7],[2,5,8],[3,6,9]]
Output:6
Explanation: each column maxium is [3, 6, 9], at first, A choose 9 so B can't choose 3rd column. then B choose 6, finally, A choose 3, you should return (3 + 9) - 6 = 6
```
