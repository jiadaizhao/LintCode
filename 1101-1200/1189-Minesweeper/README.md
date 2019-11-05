# 1189. Minesweeper

Difficulty: Medium

https://www.lintcode.com/problem/minesweeper/description

**Description**  
Let's play the minesweeper game (Wikipedia, online game)!

You are given a 2D char matrix representing the game board. 'M' represents an unrevealed mine, 'E' represents an unrevealed empty square, 'B' represents a revealed blank square that has no adjacent (above, below, left, right, and all 4 diagonals) mines, digit ('1' to '8') represents how many mines are adjacent to this revealed square, and finally 'X' represents a revealed mine.

Now given the next click position (row and column indices) among all the unrevealed squares ('M' or 'E'), return the board after revealing this position according to the following rules:

1. If a mine ('M') is revealed, then the game is over - change it to 'X'.
2. If an empty square ('E') with no adjacent mines is revealed, then change it to revealed blank ('B') and all of its adjacent unrevealed squares should be revealed recursively.
3. If an empty square ('E') with at least one adjacent mine is revealed, then change it to a digit ('1' to '8') representing the number of adjacent mines.
4. Return the board when no more squares will be revealed.

**Note:**
1. The range of the input matrix's height and width is [1,50].
2. The click position will only be an unrevealed square ('M' or 'E'), which also means the input board contains at least one clickable square.
3. The input board won't be a stage when game is over (some mines have been revealed).
4. For simplicity, not mentioned rules should be ignored in this problem. For example, you don't need to reveal all the unrevealed mines when the game is over, consider any cases that you will win the game or flag any squares.

**Example 1:**
```
Input: board = ["EEEEE","EEMEE","EEEEE","EEEEE"], Click : [3,0]
Output: ["B1E1B","B1M1B","B111B","BBBBB"]
```

**Example 2:**
```
Input: board = ["B1E1B","B1M1B", "B111B","BBBBB"], Click : [1,2]
Output: ["B1E1B","B1X1B","B111B","BBBBB"]
```
