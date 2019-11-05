# 881. Lonely Pixel II

Difficulty: Medium

https://www.lintcode.com/problem/lonely-pixel-ii/description

**Description**  
Given a picture consisting of black and white pixels, and a positive integer N, find the number of black pixels located at some specific row R and column C that align with all the following rules:

1. Row R and column C both contain exactly N black pixels.
2. For all rows that have a black pixel at column C, they should be exactly the same as row R

The picture is represented by a 2D char array consisting of 'B' and 'W', which means black and white pixels respectively.

The range of width and height of the input 2D array is [1,200].

**Example 1:**
```
Input:
["WBWBBW","WBWBBW", "WBWBBW","WWBWBW"]
3
Output: 6
Explanation:
All the bold 'B' in red are we need (all 'B's at column 1 and 3).
[['W', 'B', 'W', 'B', 'B', 'W'],
['W', 'B', 'W', 'B', 'B', 'W'],
['W', 'B', 'W', 'B', 'B', 'W'],
['W', 'W', 'B', 'W', 'B', 'W']]

Take 'B' at row R = 0 and column C = 1 as an example:
Rule 1, row R = 0 and column C = 1 both have exactly N = 3 black pixels.
Rule 2, the rows have black pixel at column C = 1 are row 0, row 1 and row 2. They are exactly the same as row R = 0.
```

**Example 2:**
```
Input:
["WWW","WWW","WWB"]
1
Output:
1
```
