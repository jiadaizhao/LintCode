# 826. Computer Maintenance

Difficulty: Hard

http://www.lintcode.com/en/problem/computer-maintenance/

A n*m matrix represents an array of computers, and give a list which represents the coordinate of the broken computer. Now we start with (0,0) and repair the computer. There are some request:
1. You have to fix all the broken computers in the current line to get to the next line.
2. If you are going to the next line, the mechanic must first return to the far left or right of the line.
Find the minimum access distance.

**Notice**  
* The size of the given matrix is n x m, n <= 200, m <= 200.
* num is the number of broken computer, num <= 1000.
* After fixing the last computer, you need to return to the far left or right of the last line.

**Example**  
Given n = 3, m = 10, List = [[0,0],[0,9],[1,7]], return 15.
```
Explanation:

Starting from (0,0), fix 0, then go to (0,9) to fix 1 and go from (0,9) to next line (1,9), then go to (1,7) to fix 3, then go back to (1,9) and go to (2,9).
```
Given n = 3, m = 10, List = [[0,3],[1,7],[1,2]], return 17.
```
Explanation:

Starting from (0,0), go to (0,3) and fix 0, then go back to (0,0) to next line (1,0), and go to (1,2) to fix 2, then go to (1,7) to fix 1, then go to (1,9), and end at (2,9).
```
