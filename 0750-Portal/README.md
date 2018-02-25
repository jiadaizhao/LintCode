# 750. Portal

Difficulty: Medium

http://www.lintcode.com/en/problem/portal/

Chell is the protagonist of the Portal Video game series developed by Valve Corporation.
One day, She fell into a maze. The maze can be thought of as an array of 2D characters of size n x m. It has 4 kinds of rooms. 'S' represents where Chell started(Only one starting point). 'E' represents the exit of the maze(When chell arrives, she will leave the maze, this question may have multiple exits). '*' represents the room that Chell can pass. '#' represents a wall, Chell can not pass the wall.  
She can spend a minute moving up,down,left and right to reach a room, but she can not reach the wall.
Now, can you tell me how much time she needs at least to leave the maze?
If she can not leave, return -1.

**Notice**  
* We guarantee that the size of the maze is n x m, and 1<=n<=200,1<=m<=200.
* There is only one 'S', and one or more 'E'.

**Example**  
```
Give
[
['S','E','*'],
['*','*','*'],
['*','*','*']
]
,return 1.

Explanation:
Chell spent one minute walking from (0,0) to (0,1).
Give
[
['S','#','#'], 
['#','*','#'], 
['#','*','*'], 
['#','*','E']
]
,return -1.

Explanation:
Chell can not leave the maze.
Give
[
['S','*','E'], 
['*','*','*'], 
['#','*','*'], 
['#','#','E']
]
,return 2.

Explanation:
First step: Chell move from (0,0) to (0,1).
Second step: Chell move from (0,1) to (0,2).
(Chell can also leave from (3,2), but it would take 5 minutes. So it's better to leave from (0,2).)
Give
[
['E','*','#'],
['#','*','#'],
['#','*','*'],
['#','#','S']
]
,return 5.

Explanation:
First step: Chell move from (0,0) to (0,1).
Second step: Chell move from (0,1) to (1,1).
Third step: Chell move from (1,1) to (2,1).
Fourth step: Chell move from (2,1) to (2,2).
Fifth step: Chell move from (2,2) to (3,2).
```