# 898. Leftmost One

Difficulty: Medium

http://www.lintcode.com/en/problem/leftmost-one/

Given a 2D array, and each line has only 0 and 1, the front part is 0, and the latter part is 1. Find the number of columns in the leftmost 1 of all the rows in the array.

**Notice**  
* The number of rows in the array and the number of columns do not exceed 1000
* In order to limit the time complexity, your program will run 50000 times

**Example**  
Given arr = [[0,0,0,1],[1,1,1,1]], return 0.
```
Explanation:
Arr[1][0] is the leftmost 1 in all rows and its column is 0.
```
Given arr = [[0,0,0,1],[0,1,1,1]], return 1.
```
Explanation:
Arr[1][1] is the leftmost 1 in all rows and its column is 1.
```
