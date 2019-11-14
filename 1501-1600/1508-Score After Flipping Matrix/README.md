# 1508. Score After Flipping Matrix

Difficulty: Medium

https://www.lintcode.com/problem/score-after-flipping-matrix/description

**Description**  
We have a two dimensional matrix A where each value is 0 or 1.

A move consists of choosing any row or column, and toggling each value in that row or column: changing all 0s to 1s, and all 1s to 0s.

After making any number of moves, every row of this matrix is interpreted as a binary number, and the score of the matrix is the sum of these numbers.

Return the highest possible score.
​
* 1≤A.length≤20
* 1≤A[0].length≤20
* A[i][j] is 0 or 1.

**Example 1:**
```
Input: [[0,0,1,1],[1,0,1,0],[1,1,0,0]]
Output: 39
Explanation:
Toggled to [[1,1,1,1],[1,0,0,1],[1,1,1,1]].
0b1111 + 0b1001 + 0b1111 = 15 + 9 + 15 = 39
```

**Example 2:**
```
Input: [[1,1],[0,0],[1,0],[1,0],[1,1]]
Output: 13
Explanation:
Toggled to [[1,1],[1,1],[1,0],[1,0],[1,1]].
0b11 + 0b11 + 0b10 + ob10 + ob11 = 3 + 3 + 2 + 2 + 3= 13
```
