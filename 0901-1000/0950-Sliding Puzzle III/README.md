# 950. Sliding Puzzle III

Difficulty: Hard

http://www.lintcode.com/en/problem/sliding-puzzle-iii/

Given a 3 x 3 matrix, the number is 1~9, among which 8 squares have numbers, 1~8, and one is null (indicated by 0), asking if the corresponding number can be put on the corresponding label In the grid (spaces can only be swapped with up, down, left, and right positions), if it can output "YES", otherwise it outputs "NO".

**Notice**  
Nothing

**Example**  
```
Given matrix =
[
[1,2,3],
[4,0,6],
[7,5,8]
]
，return "YES"。

Explanation:
First exchange 5 with a space, then 8 with a space exchange.
Given matrix =
[
[1,2,3],
[4,5,6],
[7,0,8]
]
，return "YES"。

Explanation:
Just swap 8 with the space.
```
