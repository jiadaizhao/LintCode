# 1792. Cut the sticks

Difficulty: Easy

https://www.lintcode.com/problem/cut-the-sticks/description

**Description**  
Give you N wooden sticks of unequal length. There is a cutting operation: cut all the sticks to the shortest height, and record the width of the cut (number of sticks) and throw away the cut parts. Repeat this cutting operation until all the sticks are thrown away. You need to output the width of the record (number of sticks) per cut.You need to output the number of sticks recorded per cut.

**Example 1:**
```
Example 1:
	Input: [1, 2, 3, 4, 3, 3, 2, 1]
	Output: [8, 6, 4, 1]
	
Explanation: 
-  1 2 3 4 3 3 2 1     cut 1  output 8
-  _ 1 2 3 2 2 1 _     cut 1  output 6
-  _ _ 1 2 1 1 _ _     cut 1  output 4
-  _ _ _ 1 _ _ _ _     cut 1  output 1
-  _ _ _ _ _ _ _ _     finish
```
