# 1621. Cut Connection

Difficulty: Easy

https://www.lintcode.com/problem/cut-connection/description

**Description**  
Given a matrix consists of 0 and 1, the first line is the roof.
Remove one of '1', the same column of the '1' that is not connected to the roof will drop and need to be set to '0'.

Roof will not be cut

**Example**  
Example1
```
Input: 
matrix = 
[ 
     [1,1,1,1,1],
     [0,0,1,0,1],
     [0,0,1,0,1],
     [0,0,1,0,0]
]
Point = (1,2)
Output: 
matrix = 
[                  
     [1,1,1,1,1],
     [0,0,0,0,1],
     [0,0,0,0,1],
     [0,0,0,0,0]
]
```
Example2
```
Input: 
matrix = 
[
	[1,1,1,1,1],
	[0,0,1,0,1],
	[0,0,1,0,1],
	[0,0,1,0,0]
]
Point = (2,2)
Output: 
matrix = 
[
	[1,1,1,1,1],
	[0,0,1,0,1],
	[0,0,0,0,1],
	[0,0,0,0,0]
]
```
