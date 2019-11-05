# 1084. Knight Probability in Chessboard

Difficulty: Medium

https://www.lintcode.com/problem/knight-probability-in-chessboard/description

**Description**  
On an NxN chessboard, a knight starts at the r-th row and c-th column and attempts to make exactly K moves. The rows and columns are 0 indexed, so the top-left square is (0, 0), and the bottom-right square is (N-1, N-1).

A chess knight has 8 possible moves it can make, as illustrated below. Each move is two squares in a cardinal direction, then one square in an orthogonal direction.

Each time the knight is to move, it chooses one of eight possible moves uniformly at random (even if the piece would go off the chessboard) and moves there.

The knight continues moving until it has made exactly K moves or has moved off the chessboard. Return the probability that the knight remains on the board after it has stopped moving.

* N will be between 1 and 25.
* K will be between 0 and 100.
* The knight always initially starts on the board.

**Example 1:**
```
Input: 3, 2, 0, 0
Output: 0.06
Explanation: There are two moves (to (1,2), (2,1)) that will keep the knight on the board.
From each of those positions, there are also two moves that will keep the knight on the board.
The total probability the knight stays on the board is 0.06.
```

**Example 2:**
```
Input: 3, 3, 0, 0
Output: 0.02
Explanation: There are two moves (to (1,2), (2,1)) that will keep the knight on the board.
From each of those positions, there are also two moves that will keep the knight on the board.
The total probability the knight stays on the board is 0.02.
```
